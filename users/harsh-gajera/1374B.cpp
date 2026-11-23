#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int c=0;
    while(n%6 == 0) {
        c++;
        n /= 6;
    }
    while(n%3 == 0) {
        c += 2;
        n /= 3;
    }
    
    (n == 1)? cout << c : cout << -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }

    return 0;
}