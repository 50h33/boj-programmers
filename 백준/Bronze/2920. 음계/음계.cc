#include <bits/stdc++.h>
using namespace std;
string a, s;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	for (int i = 0; i < 8; i++) {
        cin >> a;
        s += a;
    }
    if (s == "12345678") cout << "ascending\n";
    else if (s == "87654321") cout << "descending\n";
    else cout << "mixed\n";
}