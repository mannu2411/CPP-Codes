#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,q;
    cin>>n>>m>>q;
    int e,x1,y1,x2,y2;
   // cin>>e>>x1>>y1>>x2>>y2;
    
    while(q--){
        int e,x1,y1,x2,y2;
        int a1,a2,b1,b2;
        cin>>e;
        if(e==1){
            cin>>x1>>y1>>x2>>y2;
        }
        else{
            cin>>a1>>b1>>a2>>b2;
        
            if((x1<=a1 || x1>=a2) && (y1<=b2 || y1>=b1)){
                if((x1==a1 && y1==b1)|| (x1==a2 && y1==b1)||(x1==a1 && y1==b2)|| (x1==a2 && y1==b2)){
                    cout<<"No"<<endl;
                }
                else if((x2<=a1 || x2>=a2) && (y2<=b2 || y2>=b1)){
                    if((x2==a1 && y2==b1)|| (x2==a2 && y2==b1)||(x2==a1 && y2==b2)|| (x2==a2 && y2==b2)){
                        cout<<"No"<<endl;
                    }
                        
                }   
            }
            
        }
    }
    return 0;
}