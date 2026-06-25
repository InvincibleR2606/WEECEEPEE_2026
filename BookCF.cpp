#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n,q;
        cin>>n>>q;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
                cin >> arr[i];
        }
        int left=0;
        int sum=0;
        int max_books = 0;
        for (int right=0;right<n;right++) {
                sum += arr[right];
        while (sum > q) {
                sum -= arr[left];
                left++;
                }
        max_books = max(max_books, right - left + 1);
        }
        cout << max_books << "\n";
        return 0;
        }