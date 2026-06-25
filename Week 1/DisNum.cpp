#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<int> nums;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        nums.insert(x);
    }
    cout << nums.size() << "\n";
    return 0;
}