#include <bits/stdc++.h>
using namespace std;
vector<int> v(30, -1);
string s;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (v[s[i] - 'a'] >= 0) continue;
        else v[s[i] - 'a'] = i;
    }
    for (char ch = 'a'; ch <= 'z'; ch++) {
        cout << v[ch - 'a'] << " ";
    }
}