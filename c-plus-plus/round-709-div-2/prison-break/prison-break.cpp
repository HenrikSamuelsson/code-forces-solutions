#include <iostream>

int main()
{
    using namespace std;

    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        int a;
        int b;
        cin >> a >> b;
        cout << a * b << endl;
    }

    return 0;
}

