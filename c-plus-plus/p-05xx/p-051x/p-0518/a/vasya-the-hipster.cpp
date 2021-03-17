#include <iostream>

int main()
{
    using namespace std;

    int a, b;
    cin >> a >> b;

    int c, d;
    c = min(a, b);

    a -= c;
    b -= c;

    d = max(a, b);

    cout << c << " " << d / 2 << endl;

    return 0;
}
