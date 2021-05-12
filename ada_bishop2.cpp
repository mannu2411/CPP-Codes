#include "bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    int r0,c0;
    while(t--){
        cin>>r0>>c0;
        if(r0==c0){
            if(r0==8){
                cout<<16<<endl;
                cout<<1<<" "<<1<<endl;
                cout<<2<<" "<<2<<endl;
                cout<<3<<" "<<1<<endl;
                cout<<8<<" "<<6<<endl;
                cout<<6<<" "<<8<<endl;
                cout<<1<<" "<<3<<endl;
                cout<<2<<" "<<4<<endl;
                cout<<1<<" "<<5<<endl;
                cout<<4<<" "<<8<<endl;
                cout<<8<<" "<<4<<endl;
                cout<<5<<" "<<1<<endl;
                cout<<6<<" "<<2<<endl;
                cout<<7<<" "<<1<<endl;
                cout<<8<<" "<<2<<endl;
                cout<<2<<" "<<8<<endl;
                cout<<1<<" "<<7<<endl;
            }
            else{
                cout<<17<<endl;
                cout<<8<<" "<<8<<endl;
                cout<<1<<" "<<1<<endl;
                cout<<2<<" "<<2<<endl;
                cout<<3<<" "<<1<<endl;
                cout<<8<<" "<<6<<endl;
                cout<<6<<" "<<8<<endl;
                cout<<1<<" "<<3<<endl;
                cout<<2<<" "<<4<<endl;
                cout<<1<<" "<<5<<endl;
                cout<<4<<" "<<8<<endl;
                cout<<8<<" "<<4<<endl;
                cout<<5<<" "<<1<<endl;
                cout<<6<<" "<<2<<endl;
                cout<<7<<" "<<1<<endl;
                cout<<8<<" "<<2<<endl;
                cout<<2<<" "<<8<<endl;
                cout<<1<<" "<<7<<endl;
            }
        }
        else {
            if(c0>r0){
                while(c0>r0){
                    c0--;
                    r0++;
                }
                cout<<18<<endl;
                cout<<r0<<" "<<c0<<endl;
                cout<<8<<" "<<8<<endl;
                cout<<1<<" "<<1<<endl;
                cout<<2<<" "<<2<<endl;
                cout<<3<<" "<<1<<endl;
                cout<<8<<" "<<6<<endl;
                cout<<6<<" "<<8<<endl;
                cout<<1<<" "<<3<<endl;
                cout<<2<<" "<<4<<endl;
                cout<<1<<" "<<5<<endl;
                cout<<4<<" "<<8<<endl;
                cout<<8<<" "<<4<<endl;
                cout<<5<<" "<<1<<endl;
                cout<<6<<" "<<2<<endl;
                cout<<7<<" "<<1<<endl;
                cout<<8<<" "<<2<<endl;
                cout<<2<<" "<<8<<endl;
                cout<<1<<" "<<7<<endl;
        }
        else{
            while(r0>c0){
                c0++;
                r0--;
            }
                cout<<18<<endl;
                cout<<r0<<" "<<c0<<endl;
                cout<<8<<" "<<8<<endl;
                cout<<1<<" "<<1<<endl;
                cout<<2<<" "<<2<<endl;
                cout<<3<<" "<<1<<endl;
                cout<<8<<" "<<6<<endl;
                cout<<6<<" "<<8<<endl;
                cout<<1<<" "<<3<<endl;
                cout<<2<<" "<<4<<endl;
                cout<<1<<" "<<5<<endl;
                cout<<4<<" "<<8<<endl;
                cout<<8<<" "<<4<<endl;
                cout<<5<<" "<<1<<endl;
                cout<<6<<" "<<2<<endl;
                cout<<7<<" "<<1<<endl;
                cout<<8<<" "<<2<<endl;
                cout<<2<<" "<<8<<endl;
                cout<<1<<" "<<7<<endl;
        }
    }
    }
    return 0;
}