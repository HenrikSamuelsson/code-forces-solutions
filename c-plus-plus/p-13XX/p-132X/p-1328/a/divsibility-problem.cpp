#include <iostream>

int main()
{
    using namespace::std;

    int numOfTestCases;
    cin >> numOfTestCases;

    for (size_t testCaseCount = 0; testCaseCount < numOfTestCases; testCaseCount++)
    {
        int i = 0;
        int a, b;
        cin >> a >> b;
        if (0 == a % b)
        {
            i = 0;
        }
        else
        {
            i = b - a % b;
        }
        cout << i << endl;
    }

    return 0;
}
