#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int age) {
    string tmp = to_string(age);
    string answer;

    for(int i = 0; i < tmp.size(); i++)
    {
        answer += (char)(97 + (tmp[i]-'0'));
    }

    return answer;
}

int main()
{
    cout << solution(100) <<endl;

    return 0;
}