//sorting for vector of vector

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<vector<int>> &v){
    for(int i=0;i<v.size();i++){
        vector<int>&temp=v[i];
        int a=temp[0];
        int b=temp[1];
        cout<<a<<" "<<b<<" "<<endl;

    }
    cout<<endl;
}

bool printSortVector(vector<int> &a, vector<int>&b){
    return a[1]<b[1];

}

int main(){
    vector<vector<int>>v;
    //taking i/p from user
    int n;
    cout<<"Enter required elements"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    cout<<"The values are: "<<endl;
    print(v);
    sort(v.begin(),v.end());
    cout<<"Sorted by 0 index"<<endl;
    print(v);

    sort(v.begin(),v.end(), printSortVector);
    cout<<"Sorted by 1 index"<<endl;
    print(v);


}