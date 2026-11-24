#include <iostream>
#include <string>
#include <vector>
using namespace std;

// string length if not string uninitialised is zero so you cannot directly assign by index
// use push_back() or +=
// append needs string
// string(length of string, char)

int main() {
    int t;
    cin >> t;

    string ans[t];

    for (int k = 0; k < t; k++){
        string b, a;

        cin >> b;

        if (b.length() == 2) 
            cout << b << "\n";
        else    {
            for (int i = 0; i < b.length()/2; i++) {
            a.push_back(b[2*i]);
            }

            a.push_back(b[b.length() - 1]);
            cout << a << "\n";
        }
    }

    return 0;
}