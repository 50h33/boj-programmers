#include <bits/stdc++.h>
using namespace std;

int t, h, w, n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    while (t--) {
        cin >> h >> w >> n;

        int floor = (n - 1) % h + 1;
        int room = (n - 1) / h + 1;

        cout << floor;
        if (room < 10) cout << 0;
        cout << room << "\n";
    }
}