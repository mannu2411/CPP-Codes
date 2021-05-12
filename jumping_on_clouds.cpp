#include<bits/stdc++.h>
using namespace std;
int	main(int argc, char **argv)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int jumps=0;
    while(i!=n-1){
        if(i+2<n){
            if(arr[i+2]==0){
                i=i+2;
                jumps++;
            }
            else{

                i++;
                jumps++;
            }
        }
        else{
            if(i+1<n){
                i=i+1;
                jumps++;
            }
        }
    }
    cout<<jumps;
    return 0;
}
