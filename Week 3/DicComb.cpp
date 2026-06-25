#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    vector<int> ans(1e6);
    const int mod = 1e9 + 7;
    ans[0]=0;
    ans[1]=1;
    ans[2]=2;
    ans[3]=4;
    ans[4]=8;
    ans[5]=16;
    ans[6]=32;
    for(int i=7;i<=n;i++){
        ans[i]=(ans[i-1]+ans[i-2]+ans[i-3]+ans[i-4]+ans[i-5]+ans[i-6])%mod;
    }
    cout<<ans[n]<<"\n";
}