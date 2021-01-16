#include<iostream>
#include<string>
#include<sstream>
#include<iterator>
#include<vector>
#include<algorithm>

template<class T>
void write_vector(const std::vector<T>& vector) {
    std::cout << "Numbers you entered: ";
    std::copy(vector.begin(), vector.end(),
        std::ostream_iterator<T>(std::cout, " "));
    std::cout << '\n';
}


int main ()
{
    using namespace std;
    int numOfTestCases;
    std::cin >> numOfTestCases;

    for (int i = 0; i < numOfTestCases; i++)
    {
        int length;
        std::cin >> length;

        std::string line;
        std::getline(std::cin, line);
        
        std::vector<int> numbers;
        std::getline(std::cin, line);
        std::istringstream stream(line);
        int number;
        while (stream >> number)
        {
           numbers.push_back(number);
        }

        write_vector(numbers);
    }

    return 0;
}