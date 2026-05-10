#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    unordered_set<int> st;
    for (int i : nums) {
        st.insert(i);
    }
    int k = nums.size() / 2;
    answer = k < st.size() ? k : st.size();
    return answer;
}