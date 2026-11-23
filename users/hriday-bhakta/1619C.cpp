#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
// use long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long> ans;

    int t, p;
    long a, s;

    cin >> t;

    while (t--){
        cin >> a >> s;
        long b = 0;
        int c = 0;
        while (a){
            if (s < a) {
                b = -1;
                break;
            }
            p = 1;
            long dig = a % 10;
            
            long r;
            
            r = s % (long)round(pow(10, p));
            //cout << r << "\n";
            while (r - dig < 0){
                p++;
                //cout << s << endl;
                r = s % (long)round(pow(10, p));

                //cout <<  (long)round(pow(10, p)) << "\n";
            }
            
            b += round(pow(10, c))*(r-dig);
            a /= 10;
            s /= pow(10, p);
            c++;

            //cout << "B: "<< b << "\n";
            //cout << "A: " << a << "\n";
        }
        ans.push_back(b);
    }

    for (long res : ans)
        cout << res << "\n";

    return 0;
}