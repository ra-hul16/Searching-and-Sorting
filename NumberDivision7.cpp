//pg 36,37
//Number division without using actual "/" method..uses binary search method to find quotient...Code for both  +ve and -ve numbers
#include<iostream>
using namespace std;

int GetQuotient(int Dividend,int Divisor){
    int s=0;
    int e=Dividend;
    int m=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(m*Divisor==Dividend){
            return m;
        }
        else if(m*Divisor<Dividend){
            ans=m;
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int dividend=38;
    int divisor=-7;
    int val=GetQuotient(abs(dividend),abs(divisor));    //abs neglects the sign and always sends +ve num....we change sign during o/p
    

    if(dividend>0 && divisor<0 || dividend<0 && divisor>0){   //used if either dividend<0 or divisor<0
        val=0-val;
    }

    cout<<"The Quotient is: "<<val<<endl;
}