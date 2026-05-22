#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    while (n--) {
        string s;
        cin >> s;
        int len = s.length();
        
        if (len > 10) {
            // Print first char, length - 2, and last char
            cout << s[0] << len - 2 << s[len - 1] << "\n";
        } else {
            cout << s << "\n";
        }
    }
    
    return 0;
}
