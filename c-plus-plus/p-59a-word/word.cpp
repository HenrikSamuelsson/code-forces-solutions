#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    std::string line;
    std::getline(std::cin, line);
    int lower = 0;
    for (char & c : line)
    {
        if (islower(c))
        {
            lower++;
        }
    }
    
    if (2 * lower >= line.size())
    {
        for (auto & c: line) c = tolower(c);
    }
    else
    {
        for (auto & c: line) c = toupper(c);
    }
    cout << line << endl;

    return 0;
}