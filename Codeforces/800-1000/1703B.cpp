#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;
    int res;
    unordered_set<int> m;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cin >> s;
        res = n;
        m.clear();

        for (int j = 0; j < n; j++) {
            if (!m.count(s[j])) {
                res += 1;
                m.insert(s[j]);
            } 
        }
        cout << res << endl;
    }
}