// pg 39,40
//Find the odd occuring elements
#include<iostream>
using namespace std;

int OddOccurence(int arr[],int n){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;

    while(s<=e){
        //single element
        if(s==e){
            return s;
        }
        //mid check -> even or odd
        if(m&1){    //if true, then it is a odd num
            if(m-1>=0 && arr[m]==arr[m-1]){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        //even
        else{
            if(m+1<n && arr[m]==arr[m+1]){
                s=m+2;
            }
            else{
                e=m;
            }
        }
        m=s+(e-s)/2;
    }
    return -1;
}

int main(){
    int arr[]={1,1,5,5,4,4,3,6,6};
    int n=9;
    int ans=OddOccurence(arr,n);
    cout<<"Odd element is: "<<arr[ans]<<endl;
}