#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long x,y,k;
        cin>>x>>y>>k;
        long n=x+y;
        if(n>k){
            n=n/k;
            if(n%2==0){
                cout<<"Chef"<<endl;
            }
            else{
                cout<<"Paja"<<endl;
            }
        }
        else{
            cout<<"Chef"<<endl;
        }
    }
    return 0;
} 