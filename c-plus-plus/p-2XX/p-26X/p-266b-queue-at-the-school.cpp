#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    using namespace std;
    
    int n;
    int t;
    string q;
    cin >> n >> t >> q;

    for (int i = 0; i < t; i++)
    {
        int j = 0;
        while(j < n - 1)
        {
            if (q[j] == 'B')
            {
                if (q[j + 1] == 'G')
                {
                    q[j] = 'G';
                    q[j + 1] = 'B';
                    j += 2;
                }
                else
                {
                    j += 1;
                }
            }
            else if (q[j] == 'G')
            {
                j += 1;
            }
            else
            {
                cout << "ERROR";
                return 1;
            }
        }
    }
    cout << q << endl;

    return 0;
}