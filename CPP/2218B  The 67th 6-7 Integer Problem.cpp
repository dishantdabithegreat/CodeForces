#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    vector<long long> a(7);
    long long total_sum = 0;
    for (int i = 0; i < 7; i++) {
        cin >> a[i];
        total_sum += a[i];
    }

    // If we leave a[i] positive and negate others:
    // New sum = a[i] - (total_sum - a[i]) = 2*a[i] - total_sum
    long long max_sum = -1e18; // Very small initial value
    for (int i = 0; i < 7; i++) {
        long long current_sum = 2 * a[i] - total_sum;
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    cout << max_sum << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
