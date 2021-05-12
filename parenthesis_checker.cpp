#include "bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int flag=0;
        string exp;
        cin>>exp;
        stack<char> s1;
        for(int i=0;i<exp.length();i++){
            if(exp[i]=='{'||exp[i]=='['||exp[i]=='(' ){
                s1.push(exp[i]);
            }
            else if(exp[i]==')'){
                if(s1.empty()){
                    flag=1;
                    break;
                }
                else if(s1.top()=='('){
                    s1.pop();
                }
                else{
                    flag=1;
                    break;
                }
            }
            else if(exp[i]=='}'){
                if(s1.empty()){
                    flag=1;
                    break;
                }
                else if(s1.top()=='{'){
                    s1.pop();
                }
                else{
                    flag=1;
                    break;
                }
            }
            else if(exp[i]==']'){
                if(s1.empty()){
                    flag=1;
                    break;
                }
                else if(s1.top()=='['){
                    s1.pop();
                }
                else{
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1 || !s1.empty()){
            cout<<"not balanced"<<endl;
        }
        else{
            cout<<"balanced"<<endl;
        }
    }
    return 0;
}