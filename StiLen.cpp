#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
signed main(){
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int med=a[(n/2)];
    int s=0;
    for(int i=0;i<n;i++){
        s+=abs(a[i]-med);
    }
    cout<<s<<"\n";
    return 0;
}