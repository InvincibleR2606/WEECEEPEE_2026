#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int x,y,k=0;
    cin>>x>>y>>k;
    int t1=(k*y+k-2)/(x-1)+1;
    cout<<(t1+k)<<"\n";
    
    // cout<<ans<<"\n";
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