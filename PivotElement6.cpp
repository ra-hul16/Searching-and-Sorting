//pg 33,34
#include<iostream>
#include<vector>
using namespace std;

int FindPivotElement(vector<int>& arr){
        int n=arr.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            //single element
            if(s==e){
                return s;
            }
            else if(mid+1<=n && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(mid-1>=0 && arr[mid]<arr[mid-1]){
                return mid-1;
            }
            else if(arr[s]>arr[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
}

int main(){
    vector<int>ans;
    ans.push_back(12);
    ans.push_back(14);
    ans.push_back(16);
    ans.push_back(2);
    ans.push_back(4);
    ans.push_back(6);
    ans.push_back(8);
    ans.push_back(10);
    int pivot=FindPivotElement(ans);
    cout<<"The Pivot Element is: "<<pivot<<endl;
}