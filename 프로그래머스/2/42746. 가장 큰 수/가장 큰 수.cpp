#include <bits/stdc++.h>

using namespace std;

bool compare (const string& a, const string& b) {
    return (a+b) > (b+a);
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> vs;
    for (int num : numbers) {
        vs.push_back(to_string(num));
    }
    sort(vs.begin(), vs.end(), compare);
    for (string s : vs) {
        answer += s;
    }
    if (answer[0] == '0') answer = "0";
    return answer;
}