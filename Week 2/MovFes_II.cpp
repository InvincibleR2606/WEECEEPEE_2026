#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
struct Movie {
    int start;
    int end;
};
bool compareMovies(const Movie& a, const Movie& b) {
    if(a.end==b.end) return a.start<b.start;
    return a.end<b.end;
}
void solve(){
    int k;
    cin>>k;
    vector<Movie> mov(n);
        for (int i=0;i<n;i++) {
            cin>>mov[i].start>>mov[i].end;
        }
    sort(mov.begin(),mov.end(),compareMovies);
    int count=0;
    vector<int> curr_et(k);
    for(int i=0;i<n;i++){
        
        if(mov[i].start>=curr_et){
            count++;
            curr_et=mov[i].end;
        }
    }
    cout<<count<<"\n";
    }

signed main() {
    int t;
    t=1;
    cin>>n;
    while(t>0){
        solve();
        t--;
        }
    return 0;
    }