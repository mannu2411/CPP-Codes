#include "bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        stack<long long int>s;
        vector<long long int>v;
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(long long int i=n-1;i>=0;i--){
            if(s.size()==0){
                v.push_back(-1);
            }
            else if(s.top()>arr[i]){
                v.push_back(s.top());
            }
            else if(s.top()<arr[i]){
                while(s.size()>0 && s.top()<=arr[i]){
                    s.pop();
                }
                if(s.size()==0){
                    v.push_back(-1);
                }
                else{
                    v.push_back(s.top());
                }
            }
            s.push(arr[i]);
        }
        for(long long int i=n-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}