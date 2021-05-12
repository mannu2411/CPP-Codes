#include"bits/stdc++.h"
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int h,c,t;
        cin>>h>>c>>t;
        if((h+c)/2==t){
            cout<<2<<endl;
        }
        else{
        int start=1;
        float end=3;
        float avg=(((end+1)/2)*h+(end/2)*c)/(end);
        cout<<"avg="<<avg<<endl;
        while(avg>t){
            avg=((end+1)/2*h+(end/2)*c)/(end);
            if(avg<t){
                break;
            }
            start=end;
            end=(2*end)+1;
        }
        cout<<"avg="<<avg<<endl; 
        cout<<"start="<<start<<" end="<<end<<endl;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int avg=(((mid+1)/2)*h+(mid/2)*c)/(mid);
            if(t==avg){
                ans=mid;
                break;
            }
            if(t>avg){
                end=mid-2;
            }
            else{
                start=mid+2;
            }
        }
        if(ans==-1){
            int end_avg=(((end+1)/2)*h+(end/2)*c)/(end);
            int start_avg=(((start+1)/2)*h+(start/2)*c)/(start);
            if(abs(end_avg-t)<abs(start_avg-t)){
                ans=end;
            }
            else{
                ans=start;
            }
        }
        cout<<ans<<endl;
        }
        
        
    }

return 0;
}