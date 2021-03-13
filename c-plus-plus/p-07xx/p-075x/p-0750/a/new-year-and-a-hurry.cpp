#include <iostream>

int arithmeticSum(int i)
{
    return i * (5 + 5 + (i - 1) * 5) / 2;
}

int main()
{
    using namespace std;

    int p, k;
    cin >> p >> k;

    int t;    // Time in minutes available for problem solving.
    t = 4 * 60 - k;

    // Check if there is not even time to solve one problem.
    if (5 > t)
    {
        cout << 0 << endl;
        return 0;
    }

    // Check if there is time to solve all problems.
    if (arithmeticSum(p) <= t)
    {
        cout << p << endl;
        return 0;    // Done can return early.
    }

    // Some number of problems can be solved.
    // Lets do a binary search for number of problems that can be solved in time.
    int low = 1;
    int high = p;
    int middle, tm;
    while (low <= high)
    {
        middle = low + (high - low) / 2;
        //cout << "low " << low << endl;
        //cout << "high " << high << endl;
        //cout << "middle " << middle << endl; 
        tm = arithmeticSum(middle);
        if (t == tm)
        {
            break;
        }
        else if (t > tm)
        {
            low = middle + 1;
        }
        else
        {
            high = middle - 1;
        }
    }

    //cout << endl << "AFTER" << endl;
    //cout << "low " << low << endl;
    cout << min(high, low) << endl;
    //cout << "middle " << middle << endl; 

    return 0;
}
