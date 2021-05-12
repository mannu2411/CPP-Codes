#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    long p,q;
    cin>>p>>q;
    for(long i=p;i<=q;i++){
        long j=i*i;
        long a=i;
        int right_digits=0;
        int digits=0;
        while(j!=0){
            j=j/10;
            digits++;
        }
        while(a!=0){
            a=a/10;
            right_digits++;
        }
        j=i*i;
        int arr[digits];
        int d=0;
        while(j!=0){
            arr[d]=j%10;
            j=j/10;
            d++;
        }
        long l=0;
        long r=0;
        for(int k=digits-1;k>=0;k--){
            if(k>right_digits-1){
                l=l*10+arr[k];
            }
            else{
                r=r*10+arr[k];
            }
        }
        if(l+r==i){
            cout<<i<<" ";
            count++;
        }  
    }
    if(count==0){
        cout<<"INVALID RANGE";
    }
    return 0;
}