#include <iostream>

int main()
{
    using namespace std;

    int n;
    cin >> n;
    int sum = 0;
    bool negative = true;
    for (int i = 1; i <= n; i++)
    {
        if (negative)
        {
            sum -= i;
            negative = false;
        }
        else
        {
            sum += i;
            negative = true;
        }
    }
    cout << sum << endl;
    return 0;
}
