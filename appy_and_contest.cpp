#include"bits/stdc++.h"
using namespace std;
long lcm(int a,int b){
    //cout<<"here";
    if(a==0){
        return b;
    }
        return lcm(b%a,a);
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long n,a,b,k;
        cin>>n>>a>>b>>k;
        long count=0;
        long counta=0,countb=0,countlcm=0;
        long l=0;
        if(a==b){
            cout<<"Lose"<<endl;
        }
        else{
            counta=n/a;
            countb=n/b;
        if(a>b){
            l=(a*b)/lcm(a,b);
            countlcm=n/l;
        }
        else
        {
            l=(a*b)/lcm(b,a);
            countlcm=n/l;
        }
        count=counta+countb-2*countlcm;
        if(count>=k){
            cout<<"Win"<<endl;
        }
        else{
            cout<<"Lose"<<endl;
        }
        }
    }
    return 0;
}