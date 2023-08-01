#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, res = 0;
    cin >> n;
    int power = (int) (log (n)/log(5));
    
    for (int i = 1; i <= power; ++i) {
        res += floor(n/(pow(5, i)));
    }
    cout << res;
    return 0;
}
