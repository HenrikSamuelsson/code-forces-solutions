#include <iostream>

int main()
{
    using namespace std;
    string number1, number2;
    cin >> number1 >> number2;
    for (int i = 0; i < number1.size(); i++)
    {
        if (number1[i] == number2[i])
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }
    }
    return 0;
}
