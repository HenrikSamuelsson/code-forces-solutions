#include <iostream>
#include <array>

int numberOfDigits(int i);

int main()
{
    using namespace std;

    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        
        // Get number of digits in the current test case number.
        int d = numberOfDigits(t);

        // Split the test case number into individual digits into an array.
        int *a = new int(d);
        for (size_t j = 0; j < d; j++)
        {
            a[j] = t % 10;
            t /= 10;
        }

        // Count the number of non zero numbers in the array
        int nz = 0;
        for (size_t m = 0; m < d; m++)
        {
            if (a[m] != 0)
            {
                nz++;
            }
        }
        cout << nz << endl;

        // Go through the array replace the numbers with round numbers.
        int factor = 1;
        for (size_t k = 0; k < d; k++)
        {
            if (a[k] != 0 && k < d - 1)
            {
                cout << a[k] * factor << " ";
            }
            else if (a[k] != 0)
            {
                cout << a[k] * factor;
            }
            factor *= 10; 
        }
        cout << endl;

        delete a;
    }

    return 0; 
}

int numberOfDigits(int i)
{
    int n = 0;
    while (i != 0)
    {
        i /= 10;
        n++;
    }
    return n;
}
