#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> xarr(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int x;
        x=(b[i]-a[0]+m)%m;
        vector<int> temp(n);
        for(int j=0;j<n;j++){
            temp[j]=(a[j]+x)%m;
        }
        sort(temp.begin(),temp.end());
        bool match = 1;
        for(int j=0;j<n;j++){
            if(temp[j]==b[j]){
                continue;
            }
            else{
                match=0;
                break;
            }
        }
        if(match==1){
            xarr[i]=x;
        }
        else
            xarr[i]=10e9;
    }
    auto ans=min_element(xarr.begin(),xarr.end());
    cout<<*ans<<"\n";
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    //cin>>t;
    while(t>0){
        solve();
        t--;
        }
    return 0;
    }