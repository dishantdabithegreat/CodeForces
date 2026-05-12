#include <iostream>
#include <algorithm> // for min

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    if (cin >> n >> k >> l >> c >> d >> p >> nl >> np) {
        
        int drink_toasts = (k * l) / nl;
        int lime_toasts = c * d;
        int salt_toasts = p / np;
        
        // Find the minimum of the three resources
        int ans = min({drink_toasts, lime_toasts, salt_toasts}) / n;
        
        cout << ans << endl;
    }
    return 0;
}
