#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    for (int i = 3; i * i <= sum; i++) {
        if (sum % i == 0) {
            int j = sum / i;
            if ((i-2)*(j-2) == yellow) {
                answer.push_back(i > j ? i : j);
                answer.push_back(i > j ? j : i);
                break;
            }
        }
    }
    return answer;
}