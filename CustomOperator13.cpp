#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool mycomp(int &a, int &b){       //int a and b is used coz inside the vector, the nums are int
    // return a<b; //sorts in increasing order
    return a>b; //sorts in decreasing order
}

void print(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v={5,3,2,15,1,23};
    sort(v.begin(),v.end(),mycomp);
    print(v);



}