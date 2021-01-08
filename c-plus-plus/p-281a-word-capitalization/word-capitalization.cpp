#include <iostream>

int main()
{
    std::string wordToCapitalize;
    std::getline(std::cin, wordToCapitalize);
    wordToCapitalize[0] = wordToCapitalize[0] + 26;
    std::cout << wordToCapitalize << std::endl;
    return 0;
}
