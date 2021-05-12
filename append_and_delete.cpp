#include "bits/stdc++.h"
using namespace std;
 int main(int argc, char **argv)
{
    string given,desired;
    int k;
    cin>>given>>desired;
    cin>>k;
    int n;
    int diff;
    if(desired==given){
            if(k%2==0){
                cout<<"Yes";
            }
            else{
                if(k>2*desired.length()){
                    cout<<"Yes";
                }
                else{
                cout<<"No";
                }
            }
        }
    else{
        for(int i=0;i<min(desired.length(),given.length());i++){
            n=i;

            if(desired[i]!=given[i]){
                break;
            }
        }
        if(n==min(desired.length(),given.length())){
            diff=max(desired.length(),given.length())-min(desired.length(),given.length());
        }
        else{
            diff=given.length()+desired.length()-2*(n);
        }
        if(k==diff){
            cout<<"Yes";
        }
        else{
            if(k<diff){
                cout<<"No";
            }
            else{
                if((k-diff)%2==0){
                    cout<<"Yes";
                }
                else{
                    if(k>=given.length()+desired.length()){
                        cout<<"Yes";
                    }else{
                    cout<<"No";
                   }   }
                }
            }
        }

    return 0;
}

