#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    int k = t;
    int res = 0;
    int row;
    int col;

    while (k > 0) {
        cin >> row;
        cin >> col;

        res = number_spiral(row, col);

        if (k == 1) {
            cout << res;
        } else {
            cout << res << "\n";
        }     
        k -= 1;
    }
}

int number_spiral(int row, int col) {
    if (row == 1 && col == 1) {
        return 1;
    } 
}