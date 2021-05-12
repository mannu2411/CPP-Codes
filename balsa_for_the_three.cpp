#include "bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num,n;
        cin>>num;
        num++;
        while(1){
            n=num;
            int count3=0;
            int arr;
            while(n!=0){
                arr=n%10;
                n=n/10;
                if(arr==3){
                    count3++;
                }
            }
            if(count3>=3){
                break;
            }
            else{
                 num++;  
            }
        }
        cout<<num<<endl;; 
        }
   
    return 0;
}