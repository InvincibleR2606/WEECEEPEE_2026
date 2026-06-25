#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin >> n >> m >> k;
    vector <int> appl;
    vector <int> apar;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        appl.push_back(t);
    }
    for(int i=0;i<m;i++){
        int t;
        cin >> t;
        apar.push_back(t);
    }
    sort(appl.begin(),appl.end());
    sort(apar.begin(),apar.end());

    int i=0,j=0,match=0;

    while(i<n and j<m){
        if(appl[i]-k<=apar[j] && appl[i]+k>=apar[j]){
            i++;
            j++;
            match++;
        }
        else if(appl[i]-k>apar[j]){
            j++;
        }
        else 
            i++;
    }
    cout << match << "\n";
}