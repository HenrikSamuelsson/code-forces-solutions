#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        vector<int> v;
        for (int j = 0; j < 4; j++)
        {
            int l;
            cin >> l;
            v.push_back(l);
        }
        sort(v.begin(), v.end());
        cout << v[0] * v[2] << endl;
    }
    return 0;
}