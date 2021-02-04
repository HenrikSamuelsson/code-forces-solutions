#include <iostream>

int main()
{
    using namespace std;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long n;
        cin >> n;
        
        bool divisible = false;
        for (long d = 3; d <= n; d += 2)
        {
            if (n % d == 0)
            {
                divisible = true;
                break;
            }
        }
        if (divisible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
