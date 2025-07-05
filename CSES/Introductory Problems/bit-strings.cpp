#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long bpow(long long base, long long exp, long long mod) {
    long long res = 1;

    while (exp > 0) {
        if (exp % 2 == 1)
            res = res * base % mod;
        base = base * base % mod;
        exp /= 2;
    }

    return res;
}

int main() {
    long long n;
    cin >> n;
    cout << bpow(2, n, MOD);

    return 0;
}
