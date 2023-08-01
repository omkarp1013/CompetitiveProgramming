#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, res = 0;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i-1]) {
            res += abs(arr[i] - arr[i-1]);
            arr[i] = arr[i-1];
        }
    }
    cout << res;
    return 0;
}