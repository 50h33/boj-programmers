#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0, cnt = 0;
    priority_queue<int, vector<int>, greater<>> pq;
    for (int num : scoville) {
        pq.push(num);
    }
    while (pq.top() < K) {
        if (pq.size() <= 1) {
            answer = -1; break;
        }
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();
        pq.push(a + b*2);
        cnt++;
        if (pq.top() >= K) {
            answer = cnt; break;
        }
    }
    return answer;
}