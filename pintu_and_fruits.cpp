#include"bits/stdc++.h"
using namespace std;
int main(){
    int t,m,n;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int f[n];
        int p[n];
        int arr[m+1];
        int flag[m+1];
        arr[0]=100000;
        for(int i=1;i<m+1;i++){
            arr[i]=0;
            flag[i]=0;
        }
        for(int i=0;i<n;i++){
            cin>>f[i];
            flag[f[i]]=1;
        }
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        for(int i=0;i<n;i++){
            arr[f[i]]+=p[i];
           // cout<< "arr["<<f[i]<<"]="<<arr[f[i]]<<endl;
        }
        int min=100000;
        for(int i=1;i<m+1;i++){
            if(arr[i]<min && flag[i]==1){
                min=arr[i];
            }
        }
        cout<<min<<endl;
    }
    return 0;
}