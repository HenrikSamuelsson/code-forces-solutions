#include <iostream>
#include <vector>

using namespace std;

int a1, a2, a3, a4;
string s;

int main(void)
{
    cin >> a1 >> a2 >> a3 >> a4;
    cin >> s;

    int result = 0;

    vector<char> v(s.begin(), s.end());
    
    for (char c : v)
    {
        int i = c - '0';
        if (i == 1)
            result += a1;
        else if (i == 2)
            result += a2;
        else if (i == 3)
            result += a3;
        else if (i == 4)
            result += a4;
    }

    cout << result;

    return 0;
}
