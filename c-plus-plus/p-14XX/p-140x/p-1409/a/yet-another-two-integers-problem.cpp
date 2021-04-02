#include <iostream>

int main()
{
    using namespace std;

    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int m = 0;
        int diff = abs(a - b);
        m = diff / 10;
        if (diff % 10 != 0)
        {
            m += 1;
        }
        cout << m << endl;
    }

    return 0;
}
