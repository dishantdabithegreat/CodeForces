#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }
    
    int left = 0;
    int right = n - 1;
    int sereja = 0;
    int dima = 0;
    bool sereja_turn = true;
    
    while (left <= right) {
        if (cards[left] > cards[right]) {
            if (sereja_turn) sereja += cards[left];
            else dima += cards[left];
            left++;
        } else {
            if (sereja_turn) sereja += cards[right];
            else dima += cards[right];
            right--;
        }
        // Switch turns
        sereja_turn = !sereja_turn;
    }
    
    cout << sereja << " " << dima << endl;
    
    return 0;
}
