//pg38,39
#include<iostream>
using namespace std;
int NearlySortedArray(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;

    while(s<=e){
        if(m-1>=0 && arr[m-1]==target){      //suppose m=0,then it will try to access 0-1 which is not present that is why m-1>=0
            return m-1;
        }
        else if(arr[m]==target){
            return m;
        }
        else if(m+1<n && arr[m+1]==target){ //suppose m=6,then it will try to access 6+1=7 which is out of bounds, so only m+1<n
            return m+1;
        }
        else if(arr[m]>target){
            e=m-2;
        }
        else{
            s=m+2;
        }
        m=s+(e-s)/2;
    }
    return -1;
}

int main(){
    int arr[]={20,10,30,50,40,70,60};
    int n=7;
    int tar=70;

    int ans=NearlySortedArray(arr,n,tar);

    if(ans==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at: "<<ans<<endl;
    }
}