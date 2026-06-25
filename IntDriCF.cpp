#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    cin>>q;
    while(q>0){
        int x;
        cin>>x;
        int left=0;
        int right=n-1;
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(s[mid]<=x){
                ans=mid+1;
                left=mid+1;
            }
            else
                right=mid-1;
        }
        cout<<ans<<"\n";
        q--;
    }
}