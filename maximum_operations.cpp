#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         long arr[3];
    for(long i=0;i<3;i++){
        cin>>arr[i];
    }
    sort(arr,arr+3);
    if((arr[0]+arr[1])<=arr[2]){
        cout<<arr[0]+arr[1]<<endl;
    }
    else{
        long count=0;
        count+=arr[1];
        arr[2]=arr[2]-arr[1];
        arr[1]=0;
        if(arr[2]==0){
            cout<<count<<endl;
        }
        else{
            if(arr[0]>=arr[2]){
                count+=arr[2];
            }
            else{
                count+=arr[0];
            }
        }
        cout<<count<<endl;
    }

    }
   
}