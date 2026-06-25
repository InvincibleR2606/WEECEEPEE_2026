#include <bits/stdc++.h>
#define int long long

using namespace std;

bool match(int mid,vector<int>mach,int t){
    int x=0;
    for(int i=0;i<mach.size();i++){
        x+=mid/mach[i];
        if(x>=t)
            return true;
    }
    return (x>=t);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin >> n >> t;
    vector<int> mach(n);
    int mini=1e9;
    for(int i=0;i<n;i++){
        cin>>mach[i];
        mini=min(mach[i],mini);
    }
    int left=1,right=mini*t;
    int ans=right;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(match(mid,mach,t)){
            ans=mid;
            right=mid-1;
        }
        else 
            left=mid+1;
    }
    cout<<ans<<"\n";
    return 0;
}