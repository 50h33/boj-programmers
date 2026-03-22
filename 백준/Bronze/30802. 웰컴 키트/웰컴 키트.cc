#include <bits/stdc++.h>
using namespace std;

int n, s, m, l, xl, xxl, xxxl, t, p, ans;

int cnt(int num) {
    if (num % t == 0) return num / t;
    else return (num / t) + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> s >> m >> l >> xl >> xxl >> xxxl >> t >> p;
    ans = cnt(s) + cnt(m) + cnt(l) + cnt(xl) + cnt(xxl) + cnt(xxxl);    
    cout << ans << "\n";
    cout << n/p << " " << n%p << "\n";
}