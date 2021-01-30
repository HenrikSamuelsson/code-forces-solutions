#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

bool comparisonFunc(const char *c1, const char *c2)
{
    return strcmp(c1, c2) < 0;
}

int main()
{
    string input;
    getline(cin, input);
    vector<int> v;
    for (char const &c: input)
    {
        if (isdigit(c))
        {
            v.push_back(c - '0');
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << "+";
    }
    cout << v[v.size() - 1] << endl;

    return 0;
}
