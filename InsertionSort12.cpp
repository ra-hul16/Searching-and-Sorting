#include<iostream>
#include<vector>
using namespace std;

void InsertionSort(vector<int> &v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int key=v[i];
        int j=i-1;
        while (j>=0 && key<v[j])
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
        
    }
}

void print(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int>a={22,55,44,11,33};
    InsertionSort(a);
    print(a);
}