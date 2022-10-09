#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num, int k) {

    string tmp = to_string(num);

    for(int i = 0; i < tmp.size(); i++)    
    {
        if((tmp[i] -'0') == k)
            return i+1;
    }

    return -1;
}

int main()
{
    cout << solution(123456,7) << endl;

    return 0;
}