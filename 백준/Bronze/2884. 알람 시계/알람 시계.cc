#include <bits/stdc++.h>
using namespace std;
int h, m;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> h >> m;
    int time = (h * 60) + m;
    if (time >= 45) {
        time -= 45;
        cout << time / 60 << " " << time % 60 << "\n";
    } else {
        cout << 23 << " " << (m + 60 - 45);
    }
}