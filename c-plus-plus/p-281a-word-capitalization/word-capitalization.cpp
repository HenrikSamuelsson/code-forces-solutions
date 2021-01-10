#include <iostream>

int main()
{
    std::string wordToCapitalize;
    std::getline(std::cin, wordToCapitalize);

    wordToCapitalize[0] = std::toupper(wordToCapitalize[0]);
    std::cout << wordToCapitalize << std::endl;
    
    return 0;
}
