#include "bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,n;
    while(t--){
        cin>>n;
        cin>>a;
        cin>>b;
        int temp;
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        if(a!=b){
            int sum=0;
        int arr[n-1];
        for(int i=0;i<n-1;i++){
             arr[i]=a;
             sum+=a;
        }
        cout<<sum<<" ";
        sum=0;
        for(int i=0;i<n-1;i++){
            arr[i]=b;
            for(int j=0;j<n-1;j++){
                sum+=arr[j];
            }
            cout<<sum<<" ";
            sum=0;
        }
        cout<<endl;
        }
        else{
            cout<<a*(n-1)<<endl;
        }
    }

    return 0;
}