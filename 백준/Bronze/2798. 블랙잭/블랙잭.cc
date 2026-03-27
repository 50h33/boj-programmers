#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int n, m, a[104], mn = INF, ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < j; k++) {
                int num = m - (a[i] + a[j] + a[k]);
                int sum = a[i] + a[j] + a[k];
                if (num < 0) continue;
                mn = min(mn, num);
                if (mn == num) ans = sum;
            }
        }
    }

    cout << ans << "\n";
}