#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i,j,k;
    for( i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]-arr[i]==d){
                break;
            }
        }
        for(k=j+1;k<n;k++){
            if(arr[k]-arr[j]==d){
                count++;
                break;
            }
        }
    }
    cout<<count;

    return 0;
}
