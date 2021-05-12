#include "bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k==0){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            if(n%2!=0){
                cout<<"-1"<<endl;
            }
            else{
                if(n%(2*k)!=0){
                    cout<<-1<<endl;
                }
                else{
                    int arr[n+1];
                    int temp;
                    for(int i=1;i<=n;i++){
                        arr[i]=i;
                    }
                    for(int i=1;i<=n;i+=2*k){
                        for(int j=0;j<=k;j++){
                            temp=arr[i+j-1];
                            arr[i+j-1]=arr[i+j-1+k];
                            arr[i+j-1+k]=temp;
                        }
                    }
                    for(int i=1;i<=n;i++){
                        cout<<arr[i]<<" ";
                    }
                    cout<<endl;
                }
            }
        }
    }
    return 0;
}
