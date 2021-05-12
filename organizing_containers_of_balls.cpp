#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int mat[n][n];
        int container[n];
        int balls[n];
        for(int i=0;i<n;i++){
            container[i]=0;
            balls[i]=0;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>mat[i][j];
                container[i]+=mat[i][j];
                balls[j]+=mat[i][j];
            }
        }
        sort(container,container+n);
        sort(balls,balls+n);
        int flag=0;
        for(int i=0;i<n;i++){
            if(container[i]!=balls[i]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"Impossible"<<endl;
        }
        else{
            cout<<"Possible"<<endl;
        }
    }
    return 0;
} 