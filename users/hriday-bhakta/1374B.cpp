#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> ans;

    int t, n;
    cin >> t;

    while (t--){
        cin >> n;

        if (n==1){
            ans.push_back(0);
            continue;
        } 
        int p = 0, q = 0, dup, temp = n;

        while (temp % 3 == 0){
            p++;
            temp /= 3;
        }
        temp = n;
        q = p;
        while (temp % 2 == 0){
            q--;
            temp /= 2;
        }

        if (p <= 0 || p-q < 0 || q < 0) {
            //cout << "Match" << "\n";
            ans.push_back(-1);
            continue;
        }

        dup = (int)(pow(3, p) * pow(2, p - q));
        //cout << dup << "\n";

        if (dup == n)
            ans.push_back(p+q);
        else 
            ans.push_back(-1);
    }

    for (int res : ans)
        cout << res << "\n";
    

    return 0;
}