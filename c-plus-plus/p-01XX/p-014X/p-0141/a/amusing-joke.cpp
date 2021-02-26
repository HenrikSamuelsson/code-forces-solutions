#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    for (size_t i1 = 0; i1 < s1.size(); i1++)
    {
        for (size_t i3 = 0; i3 < s3.size(); i3++)
        {
            if (s1[i1] == s3[i3])
            {
                s3.erase(i3, i3 + 1);
                break;
            }
        }
    }
    cout << s3 << endl;
    return 0;
}