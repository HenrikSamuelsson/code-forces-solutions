#include <iostream>

int main()
{
    using namespace std;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        
        bool divisible = false;
        while(n > 2)
        {
            if (n % 2 == 0)
            {
               n /= 2;
            }
            else
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
