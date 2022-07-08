#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool solve(){
    ll n,x;
    cin>> n>>x;
    
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            if((arr[i]+arr[i+1])>x)
                return 0;
            
            else
                swap(arr[i],arr[i+1]);
            }
        }
        return 1;
    }
 int main(){
     ll t ;
     cin>>t;
     while(t--){
         if(solve())
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
     }
     return 0;
 }