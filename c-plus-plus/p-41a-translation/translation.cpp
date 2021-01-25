#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    string r;
    getline(cin, s);
    getline(cin, r);
    reverse(s.begin(), s.end());
    if (s == r)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
