#include <iostream>

using namespace std;

bool isBeautiful(int year);

int main()
{
    int year;
    cin >> year;

    for(;;)
    {
        year++;
        if (isBeautiful(year))
        {
            break;
        }
    }
    cout << year << endl;

    return 0;
}

bool isBeautiful(int year)
{
    int digits[4];
    for (int i = 0; i < 4; i++)
    {
        digits[i] = year % 10;
        year /= 10;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (digits[i] == digits[j])
            {
                return false;
            }
        }
    }
    return true;
}