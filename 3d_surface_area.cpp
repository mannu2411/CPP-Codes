#include "bits/stdc++.h"
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    int mat[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>mat[i][j];
        }
    }
    int cell=0;;
    int price;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(i==0){
                cell+=mat[i][j];
            }
            if(mat[i][j]>mat[i+1][j] && i!=h-1){
                cell+=mat[i][j]-mat[i+1][j];
            }
            if(j==0){
                cell+=mat[i][j];
            }
            if(mat[i][j]>mat[i][j+1] && j!=w-1){
                cell+=mat[i][j]-mat[i][j+1];
            }
            if(i==h-1){
                cell+=mat[i][j];
            }
            if(mat[i][j]>mat[i-1][j] && i!=0){
                cell+=mat[i][j]-mat[i-1][j];
            }
            if(j==w-1){
                cell+=mat[i][j];
            }
            if(mat[i][j]>mat[i][j-1] && j!=0){
                cell+=mat[i][j]-mat[i][j-1];
            }
            cell+=2;
            price+=cell;
            cell=0;
        }
    }
    cout<<price;
    return 0;

}