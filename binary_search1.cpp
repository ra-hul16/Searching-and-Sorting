#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n, int tar){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==tar){
            return mid;
        }
        if(arr[mid]>tar){
            end=mid-1;
        }
        else if(arr[mid]<tar){
            start=mid+1;
        }
        //mid update
        mid=(start+end)/2;

    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int target=9;
    int size=9;
    int ans=BinarySearch(arr,size,target);

    if(ans==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at "<<ans<<endl;
    }

}