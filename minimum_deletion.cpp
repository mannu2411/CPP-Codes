#include "bits/stdc++.h"
using namespace std;
int gcd(int a,int b){
    if(a==0)
        return b;
    return gcd(a%b,b); 
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int count=0;
        int result=0;
        int flag=0;
        int arr[n];
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        result=arr[0];
        for(int i=1;i<n;i++){
            result=gcd(arr[i],result); 
            if(result==1){
                break;
            }
        }
        if(result!=1){
            cout<<"-1";
        }
        else{
            cout<<count<<endl;
        }
    }
    return 0;
}