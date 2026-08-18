#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0, t = 0, cnt = 0, tmp = health;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    for (vector<int> v : attacks) {
        pq.push({v[0], v[1]});
    }
    while (true) {
        t++;
        
        if (health <= 0) {
            answer = -1; break;
        } else if (pq.size() == 0) {
            answer = health; break;
        }
        
        if (pq.top().first == t) {
            health -= pq.top().second; pq.pop(); cnt = 0;
        } else {
            health = min(tmp, health + bandage[1]);
            cnt++;
            if (cnt == bandage[0]) {
                health = min(tmp, health + bandage[2]); cnt = 0;
            }
        }
    }
    return answer;
}