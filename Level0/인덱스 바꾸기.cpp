#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, int num1, int num2) {

    char tmp = my_string[num1];
    my_string[num1] = my_string[num2];
    my_string[num2] = tmp;

    return my_string;
}

int main()
{

    cout << solution("I love you",3,6) << endl;


    return 0;
}