#include <iostream>
#include <array>

int main()
{
    using namespace std;
    int t;
    cin >> t;
    int * result;
    result = new int[t];
    for (int i = 1; i <= t; i++)
    {
        int p;
        cin >> p;
        result[p-1] = i;
    }
    for (int i = 0; i < t; i++)
    {
        cout << result[i] << " ";
    }
    delete[] result;
    return 0;
}