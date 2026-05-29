#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> pref_max(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i == 0) {
            pref_max[i] = a[i];
        } else {
            pref_max[i] = max(pref_max[i - 1], a[i]);
        }
    }
    
    long long min_ops = 0;
    
    // 0-indexed: odd positions in 1-based indexing correspond to EVEN indices here (0, 2, 4...)
    for (int i = 0; i < n; i += 2) {
        long long upper_bound = -1;
        
        // Check left neighbor (1-based odd index neighbor)
        if (i > 0) {
            if (upper_bound == -1) upper_bound = pref_max[i - 1];
            else upper_bound = min(upper_bound, pref_max[i - 1]);
        }
        // Check right neighbor (1-based odd index neighbor)
        if (i + 1 < n) {
            if (upper_bound == -1) upper_bound = pref_max[i + 1];
            else upper_bound = min(upper_bound, pref_max[i + 1]);
        }
        
        // If there are valid boundaries, calculate the reduction cost
        if (upper_bound != -1) {
            long long target = upper_bound - 1;
            if (a[i] > target) {
                min_ops += (a[i] - target);
            }
        }
    }
    
    cout << min_ops << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
