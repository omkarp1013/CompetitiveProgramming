#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cubes = 0;
    int i = 1;

    while (true) {
        cubes += (i * (i+1))/2;
        if (cubes > n) {
            cout << i-1;
            break;
        }
        i++;
    }
}