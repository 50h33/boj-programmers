#include <bits/stdc++.h>
using namespace std;
deque<char> d;

bool solution(string s)
{
    bool answer = true;
    if (s[0] == ')') {
        answer = false; return answer;
    } else {
        d.push_back(s[0]);
    }
    for (int i = 1; i < s.size(); i++) {
        if (d.size()) {
            string tmp = string(1, d.back()) + s[i];
            if (tmp == "()") {
                d.pop_back();
            } else {
                d.push_back(s[i]);
            }
        } else {
            d.push_back(s[i]);
        }
    }
    if (d.size() != 0) answer = false;
    else answer = true;
    return answer;
}