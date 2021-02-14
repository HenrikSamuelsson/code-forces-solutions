#include <iostream>

int main()
{
    using namespace std;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string l;
        cin >> l;
        bool alice = true;
        char start = 'a';
        char end = 'z';
        for (int j = 0; j < l.size(); j++)
        {
            if (alice)
            {
                alice = false;
                if (l[j] != 'a')
                {
                    l[j] = 'a';
                }
                else
                {
                    l[j] = 'b';
                }
            }
            else
            {
                alice = true;
                if (l[j] != 'z')
                {
                    l[j] = 'z';
                }
                else
                {
                    l[j] = 'y';
                }
            }
        }
        cout << l << endl;
    }

    return 0;
}