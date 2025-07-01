#include <bits/stdc++.h>
using namespace std;    

int main() {
    int n;
    int x = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;

        if (line == "++X" || line == "X++") {
            x++;
        } else {
            x--;
        }
    }
    cout << x;
}