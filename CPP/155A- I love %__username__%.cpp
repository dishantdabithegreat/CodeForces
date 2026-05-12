#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int score;
    cin >> score; // First score

    int max_s = score;
    int min_s = score;
    int amazing_count = 0;

    for (int i = 1; i < n; ++i) {
        cin >> score;
        if (score > max_s) {
            max_s = score;
            amazing_count++;
        } else if (score < min_s) {
            min_s = score;
            amazing_count++;
        }
    }

    cout << amazing_count << endl;
    return 0;
}
