#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
signed main(){
    cin>>n;
    vector<int>a(n);
    int de=0;
    for(int i=0;i<n;i++){
        int b;
        cin>>a[i];
        cin>>b;
        de+=b;
    }
    sort(a.begin(),a.end());
    int s=0;
    for(int i=0;i<n;i++){
        s+=a[i];
        de=de-s;
    }
    cout<<de<<"\n";
    return 0;
}