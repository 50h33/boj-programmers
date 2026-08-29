#include <bits/stdc++.h>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<pair<int, int>> q;
    int idx = 0, sum = 0, time = 0, n = truck_weights.size();
    while(idx < n || q.size()) {
        time++;
        
        if (q.size() && time - q.front().second >= bridge_length) {
            sum -= q.front().first; q.pop();
        }
        
        if (idx < n && sum + truck_weights[idx] <= weight && q.size() < bridge_length) {
            q.push({truck_weights[idx], time});
            sum += truck_weights[idx];
            idx++;
        }
    }
    return time;
}