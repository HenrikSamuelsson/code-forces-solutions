#include <iostream>

using namespace std;

int main()
{
    string line;
    int length = 0;

    getline(cin, line);

    for (char const &c: line) 
    {
        if ( c == '7' || c == '4')
        {
            length++;
        }
    }

    if (length == 7 || length == 4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}
