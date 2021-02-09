#include <iostream>

int main()
{
    using namespace std;

    int n;
    cin >> n;

    cout << "I hate ";
    bool printLove = true;
    while (n > 1)
    {
        if (printLove)
        {
            cout << "that I love ";
            printLove = false;
        }
        else
        {
            cout << "that I hate ";
            printLove = true;
        }
        n--;
    }
    cout << "it";

    return 0;
}