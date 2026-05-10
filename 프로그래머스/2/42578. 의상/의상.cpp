#include <bits/stdc++.h>
using namespace std;
unordered_map<string, int> mp;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    for (vector<string> v : clothes) {
        mp[v[1]]++;
    }
    
    for (auto& pair : mp) {
        answer *= (pair.second + 1);
    }
    answer--;
    return answer;
}