#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string rsp) {
    string answer = "";

    for(int i = 0; i < rsp.size(); i++)
    {
        if(rsp[i] == '2')
        {
            answer+= "0";
        }
        else if(rsp[i] == '0')
        {
            answer +="5";
        }
        else
        {
            answer+= "2";
        }
    }

    return answer;
}

int main()
{

    cout << solution("205");

    return 0;
}