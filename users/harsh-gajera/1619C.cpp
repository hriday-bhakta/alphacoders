#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, s;
    cin >> a >> s;

    int da, ds;
    vector<int> v;
    while(s>a) {
        da = a%10;
        a /= 10;
        ds = s%10;
        s /= 10;
        if(ds - da < 0) {
            ds = ds + (s%10)*10;
            s /= 10;
        }
        if(ds - da > 9 || ds - da < 0) {
            cout << -1;
            return;
        }
        v.insert(v.begin(), ds-da);
    }

    long long ans=0;
    if(s == a) {
        for(int i: v) {
            ans = ans*10 + i;
        }
        cout << ans;
    } else {
        cout << -1;
    }
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