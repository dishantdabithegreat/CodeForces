#include <iostream>
#include <algorithm> // for min
#include <cmath>     // for abs

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // The number of days he can wear different colors
    int different_days = min(a, b);
    
    // The number of socks left over
    int remaining = abs(a - b);
    
    // Two socks make one pair for the same-color days
    int same_days = remaining / 2;

    cout << different_days << " " << same_days << endl;

    return 0;
}
