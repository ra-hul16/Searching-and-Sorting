//pg 46 47
//find the element in an infinite or unbounded array;

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
    int i=0,j=1;
    while(arr[j]<tar){
        i=j;
        j*=2;
    }
    return BinarySearch(arr,i,j,tar);
}

int main(){
    int arr[]={3,4,5,6,11,13,14,15,56,70};
    int n=sizeof(arr)/sizeof(int);
    int tar=11;
    int ans=ExponentialSearch(arr,n,tar);
    cout<<ans<<endl;
}