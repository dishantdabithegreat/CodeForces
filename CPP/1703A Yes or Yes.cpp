#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    // We have n blocks. 
    // Small numbers: 1 to n
    // Large numbers: n+1 to 3n
    for (int i = 0; i < n; i++) {
        int small = i + 1;
        int median = n + (2 * i) + 1;
        int largest = n + (2 * i) + 2;
        
        cout << small << " " << median << " " << largest << " ";
    }
    cout << "\n";
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