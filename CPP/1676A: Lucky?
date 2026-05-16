#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    // Sum the first three characters (converting char to int by subtracting '0')
    int first_half = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
    
    // Sum the last three characters
    int second_half = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
    
    if (first_half == second_half) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
