#include <bits/stdc++.h>
using namespace std;

int go(string s) {
    int a = stoi(s.substr(0, 2));
    int b = stoi(s.substr(3, 2));
    return a * 60 + b;
}

string makeStr(int num) {
    int a = num / 60;
    int b = num % 60;
    return format("{:02d}:{:02d}", a, b);
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    int p = go(pos); int l = go(video_len);
    int s = go(op_start); int e = go(op_end);
    if (p >= s && p <= e) {
        p = e;
    }
    for (string c : commands) {
        if (c == "prev") {
            p -= 10;
            if (p < 0) p = 0;
        } else {
            p += 10;
            if (p > l) p = l;
        }
        if (p >= s && p <= e) {
            p = e;
        }
    }
    
    answer = makeStr(p);
    
    return answer;
}