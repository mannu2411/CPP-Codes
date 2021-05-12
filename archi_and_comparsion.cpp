#include"bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin>>t;
    long long a,b,n;
    while(t--){
        cin>>a>>b>>n;
        if(n%2==0){
            if(abs(a)>abs(b)){
                cout<<1;
            }
            else{
                if(abs(a)<abs(b)){
                    cout<<2;
                }
                else{
                    cout<<0;
                }
            }
        }
        else{
            if(a>b){
                cout<<1;
            }
            else{
                if(a<b){
                    cout<<2;
                }
                else{
                    cout<<0;
                }
            }
        }    
    }
    return 0;
}