#include <bits/stdc++.h>
using namespace std;
int l, num;
string s;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> l >> s;
    for (int i = 0; i < l; i++) {
        num += ((s[i]-'a'+1) * pow(31, i));
    }
    cout << num % 1234567891 << "\n";
}