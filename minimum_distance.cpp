#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int frequency[max+1];
    for(int i=0;i<max+1;i++){
        frequency[i]=-1; 
    }
    int index[max+1];
    for(int i=0;i<max+1;i++){
        index[i]=0;
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(frequency[arr[i]]==-1){
            frequency[arr[i]]=i;
        }
        else{
            frequency[arr[i]]=abs(frequency[arr[i]]-i);
            index[arr[i]]=frequency[arr[i]];
        }
    }
    int min=100000;
    for(int i=0;i<max+1;i++){
        if(index[i]!=0){
            if(index[i]<min){
                min=index[i];
            }
        }
    }
    if(min==100000)
        cout<<"-1";
    else{
        cout<<min;
    }
    return 0;
}
