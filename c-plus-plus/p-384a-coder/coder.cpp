#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int m = 0;
    cin >> n;

     for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
             if (col % 2 == 0)
             {
                 if(row % 2 == 0)
                 {

                    m++;
                 }
                 else
                 {
                     ;
                 }
             }
             else
            {
                if(row % 2 == 0)
                 {
                    ;
                 }
                 else
                 {

                     m++;
                 }

            }
        }

    }
    cout << m << endl;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
             if (col % 2 == 0)
             {
                 if(row % 2 == 0)
                 {
                     cout << 'C';
                    m++;
                 }
                 else
                 {
                     cout << '.';
                 }
             }
             else
            {
                if(row % 2 == 0)
                 {
                     cout << '.';
                 }
                 else
                 {
                     cout << 'C';
                     m++;
                 }

            }
        }
        cout << endl;
    }

    return 0;
}