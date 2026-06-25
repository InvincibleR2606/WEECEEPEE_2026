#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int x,y,k;
    int ans=0;
    cin>>x>>y>>k;
    if(k==1){
        ans=1;
    }
    else if(k==2){
        ans=(y/x)+min(x-1,y);
    }
    else if(k==3){
        ans=y-(y/x)-min(x-1,y);
    }
    else
        ans=0;
    
    cout<<ans<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    //t=1;
    cin>>t;
    while(t>0){
        solve();
        t--;
        }
    return 0;
    }