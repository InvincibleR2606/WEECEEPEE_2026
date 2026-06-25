#include <bits/stdc++.h>
#define int long long

using namespace std;

bool match(int mid,vector<int> stal,int x){
    int count=1;
    int last=stal[0];
    for(int i=1;i<stal.size();i++){
        if(stal[i]-last>=mid){
            count++;
            last=stal[i];
            if(count==x)
                return true;
        }
   }
   return false;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t>0){
        int n,x;
        cin >> n >> x;
        vector<int> stal(n);
        for(int i=0;i<n;i++){
            cin>>stal[i];
        }
        sort(stal.begin(),stal.end());
        vector<int> diff(n-1);
        int mini=1e9;
        int maxi=0;
        for(int i=0;i<n-1;i++){
            diff[i]=stal[i+1]-stal[i];
            mini=min(diff[i],mini);
            maxi=max(maxi,diff[i]);
        }
        int left=mini,right=maxi;
        while(left<=right){
            int mid = left + (right-left)/2;
            int ans=mini;
            if (match(mid,stal,x)){
                ans=mid;
                left=mid+1;
            }
            else
                right=mid-1;
        }
        t--;
    }
}