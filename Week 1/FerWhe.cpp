#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin >> n >> x;
    vector <int> w(n);
    for(int i=0; i<n; i++){
        cin >> w[i];
    }
    sort(w.begin(),w.end());
    int i=0;
    int j=n-1;
    int gon=0;
    if(w.size()%2!=0){
        j=n-2;
        gon++;
    }
    while(j>i){
        if(w[i]+w[j]<=x){
            i++;
            j--;
            gon++;
        }
        else{
            j=j-2;
            gon=gon+2;
        }
    }
    cout << gon << "\n";
}
