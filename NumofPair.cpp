#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        while(t>0){
        signed n,q,x;
        cin>>n>>q>>x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
                cin >> a[i];
        }
        sort(a.begin(),a.end());
        int ans=0;
        for(signed i=0;i<n;i++){
                auto l = lower_bound(a.begin()+i+1,a.end(),q-a[i]);
                auto u = upper_bound(a.begin()+i+1,a.end(),x-a[i]);
                ans+=u-l;
        }
        t--;
        cout<<ans<<"\n";
        }
}