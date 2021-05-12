#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=0;
        string s;
        cin>>s;
        bool alpha[26];
        for(int j=0;j<26;j++){
            alpha[j]=false;
        }
        int i;
        int flag=0;
        for(i=s.length()-1;i>0;i--){
            alpha[s[i]-97]=1;
            if(s[i-1]<s[i]){
                alpha[s[i-1]-97]=1;                
                break;
            }
            else{
                if(i==1){
                    flag=1;
                }
            }
        }
        if(flag==0){
            int min=100;
            n=i-1;
            for(int j=0;j<26;j++){
                if(alpha[j]==true){
                    if(s[n]<char(97+j)){
                        if(j<min){
                            min=j;
                        }
                    }
                }
            }
            s[n]=char(97+min);
            n++;
            alpha[min]=false;
            for(int j=0;j<27;j++){
                if(alpha[j]==true){
                    s[n]=char(j+97);
                    n++;
                    if(n==s.length()){
                        break;
                    }
                }
            }
            cout<<s<<endl;
        }
        else{
            cout<<"no answer"<<endl;
        }
    }
    return 0;
}