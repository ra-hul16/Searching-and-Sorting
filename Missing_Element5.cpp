#include<iostream>
using namespace std;

int FindMissingElement(int arr[],int n){
    int start=0;
    int end=n-1;
    int ans=-1;
    // int mid=(start+end)/2;         //This is may cause integer overflow
    int mid=start + (end -start)/2;   //or it could also be wriiten as => mid=start/2 + end/2;
    while(start<=end){
        int diff=arr[mid]-mid;

        if(diff==1){
            start=mid+1;
        }
        else{
            ans=mid;
            end=mid-1;
        }

        mid=start + (end -start)/2;



    }
    if(ans+1==0){  //if last number is removed then this will be used
        return n+1;
    }
    return ans+1;
}

int main(){
    int arr[]={1,2,3,4,6,7,8,9};
    int n=8;
    int val=FindMissingElement(arr,n);
    cout<<"Missing number is: "<<val<<endl;

}