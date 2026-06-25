#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
    int ans=0;
    int n;
    string s;
    cin>>s>>n;
    vector<int> arr(s.size()+1);
    for(int i=1;i<s.size();i++){
        if(s[i-1]==s[i])
            arr[i]=1+arr[i-1];
        else
            arr[i]=arr[i-1];
    }
    while(n>0){
        int l,r;
        cin>>l>>r;
        ans=(arr[r-1]-arr[l-1]);
        n--;
        cout<<ans<<"\n";
    }
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;;
    //cin>>t;
    while(t>0){
        solve();
        t--;
        }
    return 0;
    }