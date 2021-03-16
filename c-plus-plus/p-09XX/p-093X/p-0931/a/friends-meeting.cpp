#include <iostream>

int main()
{
    using namespace std;
    int x1, x2;
    cin >> x1 >> x2;
    int d = abs(x1 - x2);
    int t1 = 1;
    int t2 = 1;
    int t = 0;
    for(;;)
    {
        // Let friend 1 move.
        d -= 1;
        t += t1;
        t1++;
        if (d == 0)
        {
            break;
        }
        // Let friend 2 move.
        d -= 1;
        t += t2;
        t2++;
        if (d == 0)
        {
            break;
        }
    }
    cout << t << endl;
    return 0;
}
