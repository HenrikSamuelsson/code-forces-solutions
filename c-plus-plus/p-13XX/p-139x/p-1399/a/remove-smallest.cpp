#include <iostream>
#include <array>
#include <algorithm>

int main(void)
{
    using namespace std;

    // Get number of test cases.
    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        // Get number of elements
        int s;
        cin >> s;

        // Create an array and read in numbers
        int *a = new int[s];
        for (size_t j = 0; j < s; j++)
        {
            cin >> a[j];
        }

        // Sort the array
        sort(a, a + s);

        bool solvable = true;
        for (size_t j = 0; j < s - 1; j++)
        {
            if (a[j + 1] - a[j] > 1)
            {
                solvable = false;
                break;
            }
        }

        if (solvable)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        // Clean up
        delete [] a;
    }

    return 0;
}
