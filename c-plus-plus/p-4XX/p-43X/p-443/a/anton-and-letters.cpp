#include <iostream>
#include <ctype.h>
#include <set>

int main()
{
    using namespace std;

    string input;
    getline(cin, input);

    set<char> inputLetters;

    for (int i = 0; i < input.size(); i++)
    {
        if (isalpha(input[i]))
        {
            inputLetters.insert(input[i]);
        }
    }
    
    cout << inputLetters.size() << endl;

    return 0;
}
