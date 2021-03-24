#include <iostream>
#include <array>

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

        // TODO sort the array

        // Clean up
        delete [] a;
    }

    return 0;
}
