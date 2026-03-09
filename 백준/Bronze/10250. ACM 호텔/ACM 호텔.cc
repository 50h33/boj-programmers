#include <bits/stdc++.h>
using namespace std;
int t, h, w, n, first, second;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> t;
    while (t--) {
        cin >> h >> w >> n;
        n -= 1;

        first = n % h + 1;
        second = n / h + 1;

        cout << first;
        if (second < 10) cout << "0";
        cout << second << "\n";
    }
}