#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<int> arr(n);
    arr[0]=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        arr[i]=arr[i-1]+x;
    }
    while(q>0){
        int a,b;
        cin>>a>>b;
        int sum=arr[b]-arr[a-1];
        cout<<sum<<"\n";
        q--;
    }
    return 0;
}