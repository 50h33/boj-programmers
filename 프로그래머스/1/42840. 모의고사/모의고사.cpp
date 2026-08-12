#include <bits/stdc++.h>

using namespace std;

int go1 (vector<int> answers) {
    vector<int> v = {1, 2, 3, 4, 5};
    int idx = 0, ret = 0;
    for (int cur : answers) {
        if (cur == v[idx]) {
            ret++;
        }
        idx = (idx + 1) % v.size();
    }
    return ret;
}

int go2 (vector<int> answers) {
    vector<int> v = {2, 1, 2, 3, 2, 4, 2, 5};
    int idx = 0, ret = 0;
    for (int cur : answers) {
        if (cur == v[idx]) {
            ret++;
        }
        idx = (idx + 1) % v.size();
    }
    return ret;
}

int go3 (vector<int> answers) {
    vector<int> v = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int idx = 0, ret = 0;
    for (int cur : answers) {
        if (cur == v[idx]) {
            ret++;
        }
        idx = (idx + 1) % v.size();
    }
    return ret;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer; int mx = 0, can1 = 0, can2 = 0, can3 = 0;
    can1 = go1(answers); can2 = go2(answers); can3 = go3(answers);
    mx = max({can1, can2, can3});
    if (mx == can1) answer.push_back(1);
    if (mx == can2) answer.push_back(2);
    if (mx == can3) answer.push_back(3);
    return answer;
}