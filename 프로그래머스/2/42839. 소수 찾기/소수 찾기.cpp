#include <bits/stdc++.h>
using namespace std;

bool go(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num == 3) return true;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end());
    set<int> ret;
    do {
        for (int len = 1; len <= numbers.size(); len++) {
            ret.insert(stoi(numbers.substr(0, len)));
        }
    } while(next_permutation(numbers.begin(), numbers.end()));
    for (int num : ret) {
        if (go(num)) answer++;
    }
    return answer;
}