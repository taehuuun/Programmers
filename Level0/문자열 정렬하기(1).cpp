#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;

    for(int i = 0; i < my_string.size(); i++)
    {
        if(isdigit(my_string[i]))
        {
            answer.push_back(my_string[i] - '0');
        }
    }

    sort(answer.begin(), answer.end());

    return answer;
}

int main()
{
    vector<int> result;
    result = solution("p2o4i8gj2");

    for(int i = 0; i< result.size(); i++)
    {
        cout << result[i] << " ";
    }


    return 0;
}