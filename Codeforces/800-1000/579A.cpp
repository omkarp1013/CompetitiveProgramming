#include <bits/stdc++.h>
using namespace std;

#define ll long long

int count_ones(ll i) {
    int ans = 0;
    while (i > 0) {
        if ((i & 1) == 1) ans++;
        i >>= 1;
    };
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x;
    cin >> x;

    cout << count_ones(x); 
}