#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    string s;
    cin >> s;
    ll res = 1, maxRes = 1;
    for (long i = 1; i < s.length(); i++) {
        if (s[i] == s[i-1]) {
            res += 1;
            maxRes = max(res, maxRes);
        } else {
            res = 1;
        }
    }
    cout << maxRes;
}