#include <iostream>

int main()
{
    using namespace std;

    long long n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
    }
    else
    {
        cout << -(1 + n / 2) << endl;
    }
    return 0;
}
