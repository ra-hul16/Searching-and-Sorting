//pg 45,46
#include<iostream>
using namespace std;

int BinarySearch(int arr[],int start,int end,int tar){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==tar){
            return mid;
        }
        else if(arr[mid]>tar){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int ExponentialSearch(int arr[],int n,int tar){
    if(arr[0]==tar){
        return 0;
    }
    int i=1;
    while(i<n && arr[i]<tar){
        i*=2;
    }
    return BinarySearch(arr,i/2,min(i,n-1),tar);
}

int main(){
    int arr[]={3,4,5,6,11,13,14,15,56,70};
    int n=sizeof(arr)/sizeof(int);
    int tar=13;
    int ans=ExponentialSearch(arr,n,tar);
    cout<<ans<<endl;
}