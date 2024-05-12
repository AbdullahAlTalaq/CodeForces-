#include <iostream>
#include <string>
using namespace std;

string aliceWins(int n, string s) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'U')
            count++;
    }
    if (count % 2 == 1)
        return "YES";
    else
        return "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << aliceWins(n, s) << endl;
    }
    return 0;
}

