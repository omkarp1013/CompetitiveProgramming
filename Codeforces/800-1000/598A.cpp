#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t > 0) {
        long long n;
        cin >> n;

        long long total = n * (n+1)/2;
        long long powers = 0;

        for (int i = 1; i <= n; i *= 2) {
            powers += i;
        }

        t--;
        cout << total - 2 * powers << "\n";
    }
    return 0;
}
