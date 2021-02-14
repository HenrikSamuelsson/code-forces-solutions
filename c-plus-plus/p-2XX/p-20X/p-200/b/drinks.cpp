#include <iostream>

int main()
{
    using namespace std;

    int t;
    cin >> t;
    float orangeJuice;
    for (int i = 0; i < t; i++)
    {
        float drink;
        cin >> drink;
        orangeJuice += drink;
    }
    cout << orangeJuice / t << endl;

    return 0;
}
