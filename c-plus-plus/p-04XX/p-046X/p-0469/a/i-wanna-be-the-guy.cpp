#include <iostream>

int main()
{
    using namespace std;
    
    int levelCount;
    cin >> levelCount;

    // Create an array to track completed levels.
    bool *a{ new bool[levelCount]{} };
    for (int i = 0; i < levelCount; i++)
    {
        a[i] = false;
    }

    int levelCountX;
    cin >> levelCountX;
    // Get the levels that little X can pass.
    for (int i = 0; i < levelCountX; i++)
    {   
        int level;
        cin >> level;
        a[level - 1] = true;
    }

    int levelCountY;
    cin >> levelCountY;
    // Get the levels that little X can pass.
    for (int i = 0; i < levelCountY; i++)
    {   
        int level;
        cin >> level;
        a[level - 1] = true;
    }

    // Check for any level not passed.
    for (int i = 0; i < levelCount; i++)
    {
        if (a[i] == false)
        {
            // Found a level missing level, terminate early.
            cout << "Oh, my keyboard! " << endl;
            return 0;
        }
    }

    // All levels are completed because did not find any missing level.
    cout << "I become the guy." << endl;
    return 0;
}
