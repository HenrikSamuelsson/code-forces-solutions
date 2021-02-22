#include <iostream>
#include <string>
#include <vector>

int main()
{
    using namespace std;

    int n;
    cin >> n;

    for (size_t t = 0; t < n; t++)
    {
        string s;
        cin >> s;

        vector<char> chars;
        for (char c: s)
        {
            chars.push_back(c);
        }

        int idx1 = 0;
        int idx2 = 0;

        for (size_t i = 0; i < chars.size(); i++)
        {
            if (chars[i] == '1')
            {
                idx1 = i;
                break;
            }
        }

        for (int i = chars.size() - 1; i > 0; i--)
        {
            if (chars[i] == '1')
            {
                idx2 = i;
                break;
            }
        }

        int r = 0;
        if (idx1 != idx2)
        {
            for (size_t i = idx2 - 1; i >= idx1 + 1; i--)
            {
                if (chars[i] == '0')
                {
                    r++;
                }
            }
            cout << r << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}