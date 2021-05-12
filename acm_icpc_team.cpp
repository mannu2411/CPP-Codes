#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char teamMatrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>teamMatrix[i][j];
        }
    }
    int sum[n][n];
    int ways=0;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           sum[i][j]=0;
       }
    }
    int max_sum=0;
    int max_frequency=0;
    int frequency[n+1];
    for(int i=0;i<n+1;i++){
        frequency[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int k=i+1;k<n;k++){
            for(int j=0;j<m;j++){
                if(teamMatrix[i][j]=='1'||teamMatrix[k][j]=='1'){
                    sum[i][k]++;
                }
                //frequency[sum[i]]++;
            }
        }
    }
    // for(int i=0;i<n+1;i++){
    //     if(i!=n){
    //         if(sum[i]>max_sum){
    //             max_sum=sum[i];
    //         }
    //     }
    //     if(frequency[i]>max_frequency){
    //         max_frequency=frequency[i];
    //     }
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(sum[i][j]>max_sum){
                max_sum=sum[i][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(sum[i][j]==max_sum){
                ways++;
            }
        }
    }
    cout<<max_sum<<endl<<ways<<endl;
    return 0;
}