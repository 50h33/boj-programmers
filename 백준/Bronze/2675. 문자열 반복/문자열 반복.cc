#include <bits/stdc++.h>
using namespace std;
int t, r;
string s;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> t;
    while (t--) {
        cin >> r >> s;
        string temp;
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < r; j++) {
                temp += s[i];
            }
        }
        cout << temp << "\n";
    }
}