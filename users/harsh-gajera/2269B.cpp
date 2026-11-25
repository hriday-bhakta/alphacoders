#include <bits/stdc++.h>
using namespace std;

int nextNum(int a) {
    int sum = 0, d;
    while(a!=0) {
        d = a%10;
        sum = sum + d*d;
        a /= 10;
    }
    return sum;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    vector<int> results;
    for(int i=0; i<n; i++) {
        int c=0;
        while(1) {
            if(a[i] == 1) {
                results.push_back(8);
                break;
            }
            if(a[i] == 4) {
                results.push_back(c%8);
                break;
            }
            a[i] = nextNum(a[i]);
            c++;
        }
    }
    int freq[9] = {};
    for(int x : results) {
        switch(x) {
            case 0:
            freq[0]++;
            break;
            case 1:
            freq[1]++;
            break;
            case 2:
            freq[2]++;
            break;
            case 3:
            freq[3]++;
            break;
            case 4:
            freq[4]++;
            break;
            case 5:
            freq[5]++;
            break;
            case 6:
            freq[6]++;
            break;
            case 7:
            freq[7]++;
            break;
            case 8:
            freq[8]++;       
        }
    }
    int ans = 0;
    for(int i : freq) {
        ans += i*(i-1)/2;
    }
    cout << ans;
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