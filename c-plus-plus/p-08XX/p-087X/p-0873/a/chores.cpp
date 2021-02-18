#include <iostream>

int main()
{
    using namespace std;
    int n, k, x;
    cin >> n >> k >> x;
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (i < n - k)
        {
            t += a;
        }
        else
        {
            if (a < x)
            {
                t += a;
            }
            else
            {
                t += x;
            }
        }
    }
    cout << t << endl;
    return 0;
}
