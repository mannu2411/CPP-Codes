#include<bits/stdc++.h>
using namespace std;
 int main(){
     int n,m;
     cin>>n>>m;
     int l=m;
     int page_num=1;
     int arr[n];
     int special=0;;
     int start=1;
     for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int k=0;k<n;k++){
        for(int j=1;j<=arr[k];j++){
            cout<<"j="<<j<<" ";
            if(j>l){
                page_num++;
                l=l+m;
                cout<<"page NUmber="<<page_num<<" ";
            }
            if(j==page_num){
                special++;
                cout<<"j_special="<<j<<" ";
                cout<<"special="<<special<<endl;
                cout<<"j="<<j<<" ";
            }
            
        }
        page_num++;
        l=m;
     }
     cout<<special;
     return 0;
 }
