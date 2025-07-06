#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int t;
    ll a, b;
    cin >> t;

    while (t--) {
        int res = 0;
        cin >> a;
        cin >> b;
        if ((a % b) == 0) {
            cout << res << "\n";
        } else {
            res = b * (a/b + 1) - a;
            cout << res << "\n";
        }
    }
    return 0;
}