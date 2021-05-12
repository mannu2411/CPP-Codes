#include "bits/stdc++.h"
using namespace std;
int sum=0;

int main(){
    long n,k;
    cin>>n>>k;
    long arr[n];
    long sum;
    for(long i=1;i<=n;i++){
        sum=0;
        if(i<=k){
            arr[i]=1;
        }
        else{
            for(long j=i-k;j!=i;j++){
               sum=sum+arr[j]; 
            }
            arr[i]=sum%1000000007;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[n]%1000000007;
    return 0;
}