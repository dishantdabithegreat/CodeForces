#include <iostream>

using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;

    // If B is 1, a good number and a nearly good number become the exact same thing.
    // Therefore, it's impossible to pick distinct categories.
    if (b == 1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        // x = A (Nearly Good)
        // y = A * B * 2 (Good)
        // z = A * (2 * B + 1) (Nearly Good)
        long long x = a;
        long long y = a * b * 2;
        long long z = a * (2 * b + 1);
        cout << x << " " << y << " " << z << "\n";
    }
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
