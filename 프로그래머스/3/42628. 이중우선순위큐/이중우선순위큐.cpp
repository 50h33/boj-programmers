#include <bits/stdc++.h>
using namespace std;
deque<int> dq;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    for (string s : operations) {
        if (s.substr(0, 2) == "I ") {
            int num = stoi(s.substr(2));
            dq.push_back(num);
            sort(dq.begin(), dq.end());
        } else {
            if (dq.size()) {
                if (s == "D -1") {
                    dq.pop_front();
                } else {
                    dq.pop_back();
                }
            }
        }
    }
    if (dq.size()) {
        answer.push_back(dq.back());
        answer.push_back(dq.front());
    } else {
        answer.push_back(0);
        answer.push_back(0);
    }
    return answer;
}