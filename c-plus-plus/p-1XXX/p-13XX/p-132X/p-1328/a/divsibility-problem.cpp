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
        while (0 != a % b)
        {
            a++;
            i++;
        }
        cout << i << endl;
    }

    return 0;
}
