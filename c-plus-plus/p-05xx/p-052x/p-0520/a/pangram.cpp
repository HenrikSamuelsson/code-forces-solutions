#include <algorithm>
#include <cctype>
#include <iostream>
#include <set>
#include <string>

int main()
{
    using namespace std;

    // Get the number of characters in the input string.
    int n;
    cin >> n;

    // Get the string itself.
    string s;
    cin >> s;

    // Change all letters in the string to lower case.
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return tolower(c); });

    // Put the characters in the string in a set to remove duplicate characters.
    set<char> ss;
    ss.insert(s.begin(), s.end());

    // Panagram if the number of elements in the set equals the number of letters in the
    // latin alphabet.
    if (ss.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}
