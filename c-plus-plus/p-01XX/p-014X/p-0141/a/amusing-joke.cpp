#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if (s1.size() + s2.size() != s3.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    for (size_t i1 = 0; i1 < s1.size(); i1++)
    {
        for (size_t i3 = 0; i3 < s3.size(); i3++)
        {
            if (s1[i1] == s3[i3])
            {
                s3[i3] = '0';
                break;
            }
        }
    }

    for (size_t i2 = 0; i2 < s2.size(); i2++)
    {
        for (size_t i3 = 0; i3 < s3.size(); i3++)
        {
            if (s2[i2] == s3[i3])
            {
                s3[i3] = '0';
                break;
            }
        }
    }
    bool isCorrect = true;
    for (size_t i3 = 0; i3 < s3.size(); i3++)
    {
        if (s3[i3] != '0')
        {
            isCorrect = false;
        }
    }

    if (!isCorrect)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}
