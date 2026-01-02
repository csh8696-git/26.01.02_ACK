#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    vector<int> num;
    for (int i = 0; i < absolutes.size(); i++)
    {
        if (signs[i] == true)
        {
            num.push_back(absolutes[i]);
        }
        else
        {
            num.push_back(-absolutes[i]);
        }
        answer += num[i];
    }
    return answer;
}

int solution(std::vector<int> absolutes, std::vector<bool> signs) {
    int answer = 0;
    for (int i = 0; i < signs.size(); i++)
        answer += absolutes[i] * (signs[i] ? 1 : -1);
    return answer;
}

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    for (int i = 0; i < signs.size(); i++) {
        if (!signs[i]) absolutes[i] *= -1;
        answer += absolutes[i];
    }
    return answer;
}