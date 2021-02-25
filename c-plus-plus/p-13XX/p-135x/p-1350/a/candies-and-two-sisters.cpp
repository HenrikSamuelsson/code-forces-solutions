#include <iostream>

int main()
{
    using namespace std;

    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        if (n < 3)
            cout << 0 << endl;
        else if (n % 2 == 0)
            cout << n / 2 - 1 << endl;
        else
            cout << n / 2 << endl;
    }

    return 0;
}
