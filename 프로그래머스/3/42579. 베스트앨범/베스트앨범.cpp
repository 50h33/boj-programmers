#include <bits/stdc++.h>
using namespace std;
vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string, int> total;
    map<string, vector<pair<int, int>>> songs;
        
    for (int i = 0; i < (int) genres.size(); i++) {
        total[genres[i]] += plays[i];
        songs[genres[i]].push_back({plays[i], i});
    }
    
    for (auto& [genre, v] : songs) {
        sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first == b.first) return a.second < b.second;
            else return a.first > b.first;
        });
    }
    
    vector<pair<string, int>> order (total.begin(), total.end());
    sort(order.begin(), order.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second;
    });
    
    for (auto& [genre, sum] : order) {
        auto& v = songs[genre];
        int k = min(2, (int)v.size());
        for (int i = 0; i < k; i++) answer.push_back(v[i].second);
    }
    
    return answer;
}