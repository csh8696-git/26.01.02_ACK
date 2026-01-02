#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % divisor == 0)
        {
            answer.push_back(arr[i]);
        }
    }
    sort(answer.begin(), answer.end());
    if (answer.size() == 0)
    {
        answer.push_back(-1);
    }
    return answer;
}

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % divisor == 0)
            answer.push_back(arr[i]);
    }

    return answer.empty() ? vector<int>(1, -1) : answer;
}

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % divisor == 0) answer.push_back(arr[i]);
    }
    if (!answer.size()) answer.push_back(-1);
    sort(answer.begin(), answer.end());
    return answer;
}

vector<int> solution(vector<int> arr, int divisor) {

    vector<int> answer;

    for (int i = 0; i < arr.size(); i++)
    {
        if ((arr[i] % divisor) == 0)
        {
            answer.push_back(arr[i]);
        }
    }

    if (answer.size() == 0)
    {
        answer.push_back(-1);
        return answer;
    }

    else
    {
        for (int i = 0; i < answer.size(); i++)
        {
            for (int j = i + 1; j <= answer.size() - 1; j++)
            {
                if (answer[i] > answer[j])
                {
                    int temp = answer[i];
                    answer[i] = answer[j];
                    answer[j] = temp;
                }
            }
        }
        return answer;
    }
}