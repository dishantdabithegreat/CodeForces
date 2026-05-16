#include <iostream>

using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int count = 0;
    
    // Check if each participant ran further than Timur (a)
    if (b > a) count++;
    if (c > a) count++;
    if (d > a) count++;
    
    cout << count << "\n";
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
