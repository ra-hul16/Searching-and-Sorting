#include<iostream>
#include<vector>
using namespace std;

void SelectionSort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(v[minIndex]>v[j]){
                minIndex=j;
            }
        }
        swap(v[i],v[minIndex]);
    }
}

void print(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int>a={22,55,44,11,33};
    SelectionSort(a);
    print(a);
}