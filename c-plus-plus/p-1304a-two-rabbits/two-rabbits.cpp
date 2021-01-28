#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        // y - x = ans * (a + b)
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        if (0 == (y - x) % (a + b))
        {
            cout << (y - x) / (a + b) << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
