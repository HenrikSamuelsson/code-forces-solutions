#include <iostream>

int main()
{
    using namespace std;
    
    int t;
    cin >> t;
    
    int n = 1;
    string lastMagnet;
    string magnet;
    cin >> lastMagnet;

   
    for (int i = 1; i < t; i++)
    {
        cin >> magnet;
        if (lastMagnet != magnet)
        {
            n++;
            lastMagnet = magnet;
        }
        
        
    }

    cout << n << endl;
}