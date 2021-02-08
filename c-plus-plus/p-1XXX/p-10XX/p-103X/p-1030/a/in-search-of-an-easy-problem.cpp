#include <iostream>

int main()
{
    using namespace std;

    int t;
    cin >> t;
    bool isEasy = true;
    for (int i = 0; i < t; i++)
    {
        int v;
        cin >> v;
        if(v == 1)
        {
            isEasy = false;
            break;
        }
    }
    if (isEasy)
    {
        cout << "EASY" << endl;
    }
    else
    {
        cout << "HARD" << endl;
    }
    return 0;
}