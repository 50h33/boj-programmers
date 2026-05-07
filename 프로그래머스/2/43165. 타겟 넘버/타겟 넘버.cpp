#include <string>
#include <vector>
using namespace std;

int go(int idx, int sum, vector<int> numbers, int target) {
    if (idx == numbers.size() && sum == target) return 1;
    if (idx >= numbers.size()) return 0;
    return go(idx+1, sum+numbers[idx], numbers, target)
        + go(idx+1, sum-numbers[idx], numbers, target);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    answer = go(0, 0, numbers, target);
    return answer;
}