#include <iostream>
#include <unordered_set>
#include <string>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::string s;
        std::cin >> s;

        char last = '0';
        std::unordered_set<char> charSet;
        bool suspect = false;

        // Go through the string.
        for (char& c : s)
        {
            if (!last)
            {
                last = c;
            }
            else
            {
                // Check for new character compared to the last.
                if (c != last)
                {
                    // Check if the last character have been seen before.
                    if (charSet.find(last) != charSet.end())
                    {
                        suspect = true;
                        break;
                    }
                    else
                    {
                        charSet.insert(last);
                        last = c;
                    }
                }
            }
        }

        // The very last character is not checked in the above loop so finnally check this now.
        if (charSet.find(s[s.size()-1]) != charSet.end())
        {
            suspect = true;
        }

        if (suspect)
        {
            std::cout << "NO" << std::endl;
        }
        else
        {
            std::cout << "YES" << std::endl;
        }
    }

    return EXIT_SUCCESS;
}
