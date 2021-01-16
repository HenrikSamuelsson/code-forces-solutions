#include<iostream>
#include<string>
#include<sstream>
#include<iterator>
#include<vector>
#include<algorithm>

template<class T>
void write_vector(const std::vector<T>& vector) {
    //std::cout << "Numbers you entered: ";
    std::cout << vector.size() << std::endl;
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
        std::vector<int> results;
        std::getline(std::cin, line);
        std::istringstream stream(line);
        
        int number;
        while (stream >> number)
        {
           numbers.push_back(number);
        }
        
        // Traverse backwards
        for (int i = numbers.size() - 1; i >= 1; i -= 2)
        {
            if ((numbers[i] == 1 && numbers[i - 1] == 0) || 
                (numbers[i] == 0 && numbers[i - 1] == 1))
            {
                results.insert(results.begin(), 0);
            }
            else
            {
                results.insert(results.begin(), numbers[i]);
                results.insert(results.begin(), numbers[i - 1]);
            }
        }
        
        write_vector(results);
        
    }

    return 0;
}