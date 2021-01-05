#include <iostream>
#include <cmath>

int main()
{
    int r;    // Radius of the pizza including the crust.
    int d;    // Width of the crust.
    int n;    // Number of sausage pieces.
    int c;    // Number of sausage pieces that lay on the crust.

    std::cin >> r;
    std::cin >> d;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;    // X-coordinate of sausage piece.
        int y;    // Y-coordinate of sausage piece.
        int ri;   // Radius of sausage piece.
        
        std::cin >> x;
        std::cin >> y;
        std::cin >> ri;

        // Calculate the distance from the center of the pizza
        // to the center of the sausage piece.
        double dis = sqrt(x * x + y * y);
        if (dis + ri <= r && dis - ri >= r - d)
        {
            c++;
        }
    }

    std::cout << c << std::endl;
    return 0;
}