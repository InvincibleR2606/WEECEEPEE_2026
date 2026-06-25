#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
    int x,y=0;
    int a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;
    x = (a-1)/c + 1;
    y = (b-1)/d + 1;
    if (x+y>k){
        cout<<-1<<"\n";
    }
    else 
        cout<<x<<" "<<y<<"\n";
    
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