#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n,x;
    cin>>n>>x;
    vector<int> ans(1e6+1);
    const int mod = 1e9 + 7;
    int denom[n];
    for(int i=0;i<n;i++){
        cin>>denom[i];
        ans[denom[i]]=1;
    }
    ans[0]=1;
    for(int i=1;i<=x;i++){
        int k=0;
        for(int j=0;j<n;j++){
            if(i-denom[j]>=0)
                k=(k+ans[i-denom[j]])%mod;
        }
        ans[i]=k;
    }
    cout<<ans[x]<<"\n";
}