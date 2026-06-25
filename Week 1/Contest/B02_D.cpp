#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> arrx(n);
    vector<int> arry(n);
    for(int i=0;i<n;i++){
        cin>>arrx[i]>>arry[i];
    }
    int w=0,a=0,s=0,d=0;
    for(int i=0;i<n;i++){
        if(arry[i]>y)
            w++;
        if(arry[i]<y)
            s++;
        if(arrx[i]>x)
            d++;
        if(arrx[i]<x)
            a++;
    }
    int m=max(w,max(a,max(s,d)));
    int shx,shy;
    if(m==w){
        shx=x;
        shy=y+1;
    }
    else if(m==s){
        shx=x;
        shy=y-1;
    }
    else if(m==a){
        shx=x-1;
        shy=y;
    }
    else if(m==d){
        shx=x+1;
        shy=y;
    }
    cout<<m<<"\n";
    cout<<shx<<" "<<shy<<"\n";
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