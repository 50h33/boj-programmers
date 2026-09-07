#include <bits/stdc++.h>
using namespace std;

string solution(string number, int k) {
    string answer = ""; vector<char> v;
    int n = number.size(), rem = k;
    for (char c : number) {
        while (v.size() && rem && v.back() < c) {
            v.pop_back(); rem--;
        }
        v.push_back(c);
    }
    while (v.size() > n - k) {
        v.pop_back();
    }
    for (char c : v) {
        answer += c;
    }
    return answer;
}