#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<vector<int>> tree(n+1,vector<int>(n+1));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char s;
            cin>>s;
            if(s=='*'){
                tree[i+1][j+1]=tree[i+1][j]+tree[i][j+1]-tree[i][j]+1;
            }
            else{
                tree[i+1][j+1]=tree[i+1][j]+tree[i][j+1]-tree[i][j];
            }
        }
    }
    while(q>0){
        int y1,y2,x1,x2;
        cin>>y1>>x1>>y2>>x2;
        int ans=tree[y2][x2]-tree[y1-1][x2]-tree[y2][x1-1]+tree[y1-1][x1-1];
        cout<<ans<<"\n";
        q--;
    }
}