#include <iostream>

int main()
{
    using namespace std;
    int t;
    cin >> t;
    int h;
    cin >> h;
    int w = 0;
    for (int i = 0; i < t; i++)
    {
        int p;
        cin >> p;
        if (p > h)
        {
            w += 2;
        }
        else
        {
            w += 1;
        }
    }
    cout << w << endl;
    return 0;
}