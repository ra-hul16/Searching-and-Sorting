//pg 40 41 42
#include<iostream>
#include<vector>
using namespace std;

void BubbleSort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}

void print(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int>a={7,2,34,1,45,89,457,23,33};
    BubbleSort(a);
    print(a);
}