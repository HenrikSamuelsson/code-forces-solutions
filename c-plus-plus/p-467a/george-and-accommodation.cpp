#include <iostream>

int main()
{
    using namespace std;
    {
        int t;
        cin >> t;
        int n = 0;
        for (int i = 0; i < t; i++)
        {
            int p, q;
            cin >> p >> q;
            if (q - p >= 2)
            {
                n++;
            }
        }
        cout << n << endl;
    } // namespace std
    return 0;
}
