#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    // Rule 1: If k >= 2, we can always sort the array (equivalent to bubble sort swaps).
    // Rule 2: If k == 1, we can't change anything, so the array must already be sorted.
    if (k >= 2 || is_sorted(a.begin(), a.end())) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
