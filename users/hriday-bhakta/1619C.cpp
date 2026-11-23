#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<long long> ans;
    while (t--) {
        long long a, s;
        cin >> a >> s;

        long long b = 0;
        long long mult = 1; // Tracks place value in b (1, 10, 100...)
        bool possible = true;

        while (a > 0) {
            if (s < a) {
                possible = false;
                break;
            }

            long long dig_a = a % 10;
            long long dig_s = s % 10;

            if (dig_s >= dig_a) {
                b += (dig_s - dig_a) * mult;
                s /= 10;
            } else {
                // Need 2 digits from s
                dig_s = s % 100;
                long long diff = dig_s - dig_a;

                // diff must be a valid single digit (0 to 9)
                if (diff < 0 || diff > 9) {
                    possible = false;
                    break;
                }
                b += diff * mult;
                s /= 100;
            }

            a /= 10;
            mult *= 10;
        }

        if (!possible) {
            ans.push_back(-1);
        } 
        else {
            // Attach any remaining front digits of s
            b += s * mult;
            ans.push_back(b);
        }
    }

    for (long long res : ans)
        cout << res << "\n";

    return 0;
}