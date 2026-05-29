#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int p1;
    cin >> p1; // Since k = 1, there's only one special index
    
    int target = a[p1];
    int flips_from_left = 0;
    int flips_from_right = 0;
    
    // Process prefixes from left to right up to p1 - 1
    for (int i = 1; i < p1; i++) {
        int current_val = a[i] ^ (flips_from_left % 2);
        if (current_val != target) {
            flips_from_left++;
        }
    }
    
    // Process suffixes from right to left down to p1 + 1
    for (int i = n; i > p1; i--) {
        int current_val = a[i] ^ (flips_from_right % 2);
        if (current_val != target) {
            flips_from_right++;
        }
    }
    
    int total_flips = flips_from_left + flips_from_right;
    
    // The special index is affected by all operations launched from both sides.
    // If the total operations so far is odd, a[p1] will be inverted.
    // We need 1 extra operation on range [p1, p1] to fix it.
    if (total_flips % 2 != 0) {
        total_flips++;
    }
    
    cout << total_flips << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
