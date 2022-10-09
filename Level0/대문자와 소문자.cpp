#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string)
{
    string answer = "";

    for(int i = 0; i < my_string.size(); i++)
    {
        if(isupper(my_string[i]))
        {
            answer += tolower(my_string[i]);
        }
        else
        {
            answer += toupper(my_string[i]);
        }
    }

    return answer;
}

int main()
{
    cout << solution("abCdEfghIJ") << endl;

    return 0;
}