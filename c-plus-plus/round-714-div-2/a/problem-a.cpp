#include <iostream>

int main()
{
    using namespace std;

    int t;
    cin >> t;

    for (size_t i = 1; i <= t; i++)
    {
        int n;
        int k;
        cin >> n >> k;
        
        if (n % 2 == 0)
        {
            if (k >= n / 2)
            {
                cout << "-1" << endl;
                continue;
            }
        }
        else
        {
            if (k > n / 2)
            {
                cout << "-1" << endl;
                continue;
            }
        }

        int threshold = n - k;
        int max = n;
        bool first = true;
        for (size_t j = 1; j <= threshold; j++)
        {
            if (first)
            {
                cout << j;
                first = false;
            }
            else
            {
                cout << " " << j;
            }
            if (k-- > 0)
            {
                cout << " " << max--;
            }
        }
        cout << endl;
    
    }

    return 0;
}
