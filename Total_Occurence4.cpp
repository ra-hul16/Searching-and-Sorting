#include<iostream>
using namespace std;

int FindFirstOccurence(int arr[],int n, int tar){
    int start=0;
    int end=n-1;
    int ans=-1;
    // int mid=(start+end)/2;         //This is may cause integer overflow
    int mid=start + (end -start)/2;   //or it could also be wriiten as => mid=start/2 + end/2;
    while(start<=end){
        if(arr[mid]==tar){
            ans = mid;
            end=mid-1;
        }
        if(arr[mid]>tar){
            end=mid-1;
        }
        else if(arr[mid]<tar){
            start=mid+1;
        }
        //mid update
        mid=start + (end -start)/2;

    }
    return ans;
}

int FindLastOccurence(int arr[],int n, int tar){
    int start=0;
    int end=n-1;
    int ans=-1;
    // int mid=(start+end)/2;         //This is may cause integer overflow
    int mid=start + (end -start)/2;   //or it could also be wriiten as => mid=start/2 + end/2;
    while(start<=end){
        if(arr[mid]==tar){
            ans = mid;
            start=mid+1;
        }
        if(arr[mid]>tar){
            end=mid-1;
        }
        else if(arr[mid]<tar){
            start=mid+1;
        }
        //mid update
        mid=start + (end -start)/2;

    }
    return ans;
}

int FindTotalOccurence(int arr[], int n,int tar){
    int firstocc=FindFirstOccurence(arr,n,tar);
    int lastocc=FindLastOccurence(arr,n, tar);
    int totalocc=lastocc-firstocc+1;
    return totalocc;
}

int main(){
    int arr[] = {10, 10, 20, 20, 20, 20, 20, 20, 30, 30};
    int target=20;
    int size=10;
    int ans=FindTotalOccurence(arr,size,target);
    cout<<"Total Occurences are: "<<ans;

}