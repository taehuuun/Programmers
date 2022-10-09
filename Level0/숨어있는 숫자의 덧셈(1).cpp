#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string) {
    int answer = 0;

    for(int i = 0; i < my_string.size(); i++)
    {
        if(isdigit(my_string[i]))
        {
            answer += my_string[i] - '0';
        }
    }

    return answer;
}

int main()
{

    cout << solution("1a2b3c4d123") << endl;

    return 0;
}