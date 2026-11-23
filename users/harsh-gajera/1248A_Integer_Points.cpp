#include <bits/stdc++.h>
using namespace std;

void solve() {
    
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i=0; i<n; i++) {
        cin >> p[i];
    }

    int m;
    cin >> m;
    vector<int> q(m);
    for(int i=0; i<m; i++) {
        cin >> q[i];
    }

    int en=0, em=0, on, om;
    for(int i=0; i<n; i++) {
        if(p[i]%2 == 0){
            en++;
        } 
    }
    on = n - en;
    for(int i=0; i<m; i++) {
        if(q[i]%2 == 0){
            em++;
        } 
    }
    om = m - em;
    
    cout << (long long)en*em + (long long)on*om;

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
        cout << "\n";
    }

    return 0;

}