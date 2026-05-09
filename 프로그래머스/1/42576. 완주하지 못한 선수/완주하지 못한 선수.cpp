#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    unordered_map<string, int> mp;
    
    for (const string& s : participant) {
        mp[s]++;
    }
    
    for (const string& s : completion) {
        mp[s]--;
    }
    
    for (auto& pair : mp) {
        if (pair.second > 0) {
            answer = pair.first;
            break;
        }
    }
    
    return answer;
}