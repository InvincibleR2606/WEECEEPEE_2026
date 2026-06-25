#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
signed main(){
    cin>>n;
    vector<int>a(n);
    int sum=0;
    int ans;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    if(a[n-1]*2>sum){
        ans=2*a[n-1];
    }
    else
        ans=sum;
    cout<<ans<<"\n";
    return 0;
}