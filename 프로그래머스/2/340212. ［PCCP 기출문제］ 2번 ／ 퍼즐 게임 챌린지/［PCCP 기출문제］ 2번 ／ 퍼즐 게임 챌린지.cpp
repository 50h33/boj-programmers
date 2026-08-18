#include <bits/stdc++.h>
using namespace std;

bool check(int lvl, vector<int>& diffs, vector<int>& times, long long limit) {
    for (long long i = 0; i < diffs.size(); i++) {
        if (diffs[i] <= lvl) limit -= times[i];
        else {
            limit -= times[i] * (diffs[i] - lvl + 1);
            if (i != 0) limit -= times[i-1] * (diffs[i] - lvl);
        }
        if (limit < 0) break;
    }
    if (limit < 0) return false;
    else return true;
}

int solution(vector<int> diffs, vector<int> times, long long limit) {
    int answer = 0;
    long long lo = 1, hi = *max_element(diffs.begin(), diffs.end());
    while (lo < hi) {
        long long mid = (lo + hi) / 2;
        if (check(mid, diffs, times, limit)) hi = mid;
        else lo = mid + 1;
    }
    answer = lo;
    return answer;
}