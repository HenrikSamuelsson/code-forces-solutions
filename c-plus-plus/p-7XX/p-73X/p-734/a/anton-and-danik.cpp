#include <iostream>

int main ()
{
    using namespace std;

    int t;
    cin >> t;
    
    string data;
    cin >> data;

    int a = 0;
    int d = 0;

    for (const char& c: data)
    {
        if (c == 'A')
        {
            a++;
        }
        else if (c == 'D')
        {
            d++;
        }
        else
        {
            cout << "ERROR" << endl;
            return 1;
        }
    }
    
    if (a > d)
    {
        cout << "Anton";
    }
    else if (d > a)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }

    return 0;
}