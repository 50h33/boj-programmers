#include <string>
#include <vector>
using namespace std;

int go(vector<int> numbers, int target, int idx, int sum) {
    if (idx == numbers.size()) {
        return sum == target ? 1 : 0;
    }
    
    return go(numbers, target, idx+1, sum+numbers[idx])
        + go(numbers, target, idx+1, sum-numbers[idx]);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    answer += go(numbers, target, 0, 0);
    return answer;
}