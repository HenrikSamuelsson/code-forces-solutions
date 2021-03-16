#include <iostream>

int main(void)
{
    using namespace std;

    int n, m;
    cin >> m >> n;

    for (int row = 0; row < m; row++)
    {
        if (row % 2 == 0)
        {
            for (int col = 0; col < n; col++)
            {
                cout << '#';
            }
            cout << endl;
        }
        else if (row % 3 == 0)
        {
            cout << '#';
            for (int col = 1; col < n; col++)
            {
                cout << '.';
            }
            cout << endl;
        }
        else
        {
            for (int col = 0; col < n - 1; col++)
            {
                cout << '.';
            }
            cout << '#';
            cout << endl;
        }
    }

    return 0;
}