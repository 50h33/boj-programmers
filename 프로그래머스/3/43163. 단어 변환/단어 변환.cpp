#include <bits/stdc++.h>
using namespace std;
int num;
string cur;
bool visited[54];
queue<pair<string, int>> q;

bool canChange(string begin, string word){
    int diff = 0;
    
    for (int i = 0; i < begin.size(); i++) {
        if (begin[i] != word[i]) diff++;
    }
    
    return diff == 1;
}

int solution(string begin, string target, vector<string> words) {
    q.push({begin, 0});
    while (q.size()) {
        auto [cur, num] = q.front(); q.pop();
        if (cur == target) return num;
        for (int i = 0; i < words.size(); i++) {
            if (canChange(cur, words[i]) && !visited[i]) {
                visited[i] = 1;
                q.push({words[i], num+1});
            }
        }
    }
    return 0;
}