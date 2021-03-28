#include <iostream>

int main ()
{
    using namespace std;

    int n;
    cin >> n;

    int max, min, next;
    cin >> next;    // Get the first score.

    max = next;
    min = next;
    
    int amazingCount = 0;

    for (size_t i = 1; i < n; i++)
    {
        cin >> next;
        if (next > max)
        {
            max = next;
            amazingCount++;
        }
        else if (next < min)
        {
            min = next;
            amazingCount++;
        }
    }

    cout << amazingCount << endl;
    return 0;
}
