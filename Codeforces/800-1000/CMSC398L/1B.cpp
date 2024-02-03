#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int q, x;
    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> x;
        bool isPrime = true;

        for (int j = 2; j <= sqrt(x); j++) {
            if (x % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (x == 1) {
            isPrime = false;
        }

        cout << (isPrime ? "YES" : "NO") << endl;
    }

    return 0;
}
