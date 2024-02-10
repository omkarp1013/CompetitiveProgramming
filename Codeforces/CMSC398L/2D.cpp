#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main() {
    fastio
    int n, l;
    cin >> n >> l;
    set<int> s;
    s.insert(0);
    s.insert(l);

    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({y, x});
    }

    int ans = 0;
    sort(v.begin(), v.end());
    for(auto [y, x] : v) {
        auto itr = s.insert(x).first;
        ans += *next(itr) - *prev(itr);
    }
    
    cout << ans << "\n";
}
