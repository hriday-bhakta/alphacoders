#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long m, n, a;
    cin >> m >> n >> a;
    long long ans = ((m+a-1)/a) * ((n+a-1)/a);
    cout << ans;

    return 0;
}