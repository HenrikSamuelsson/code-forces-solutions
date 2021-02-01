#include <iostream>

int main()
{
    using namespace std;

    int n, a, b;
    cin >> n >> a >> b;

    int r = -1;
    while (n > 0)
    {
        n /= 2;
        r++;
    }

    return 0;
}
