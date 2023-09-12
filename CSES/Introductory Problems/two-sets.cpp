#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    if (((n * (n+1))/2) % 2) {
        cout << "YES" << endl;
        
    } else {
        cout << "NO";
        return 0;
    }
}