#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> jobs) {
    int answer = 0, idx = 0, time = 0, sum = 0, cnt = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    sort(jobs.begin(), jobs.end());
    while (cnt < jobs.size()) {
        while (idx < jobs.size() && jobs[idx][0] <= time) {
            pq.push({jobs[idx][1], jobs[idx][0]});
            idx++;
        }
        if (pq.empty()) {
            time = jobs[idx][0]; continue;
        }
        auto [dur, start] = pq.top(); pq.pop();
        time += dur;
        sum += time - start;
        cnt++;
    }
    answer = sum / jobs.size();
    return answer;
}