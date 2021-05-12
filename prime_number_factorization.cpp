#include<bits/stdc++.h>
using namespace std;
int f[100],expo[100],len=1;
void primefact(int n){
    if(n=1){
        len++;
        f[len]=2;
        expo[len]=0;
    }
    int d=2;
    while(d*d<=n && n>1){
        int k=0;
        while(n%d==0){
            k++;
            n/=d;
        }
        if(k>0){
            len++;
            f[len]=d;
            expo[len]=k;
        }
        d++;
    }
    if(n>1){
        len++;
        f[len]=n;
        expo[len]=1;

    }
    return;
}
int main(){
    int c;
    cin>>c;
    primefact()
    for(int i=0;i<=len;i++){
        cout<<f[i]<<expo[i]<<endl;
    }
    
    return 0;
}