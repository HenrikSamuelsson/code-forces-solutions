/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @file solution-1657-a.cpp
 * @author Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief C++ solution to Codeforces problem 1657 A - Integer Moves
 *
 * There's a chip in the point (0, 0) of the coordinate plane. In one operation,
 * we can move the chip from some point (x1, y1) to some point (x2, y2) if the
 * Euclidean distance between these two points is an integer, i.e.
 * ((x1 - x2)^2 + (y1 - y2)^2)^0.5 is an integer.
 *
 * The task is to determine the minimum number of operations required to move
 * the chip from the point (0, 0) to a given point (x, y), where x and y are
 * both integers.
 *
 * The main thing to understand is that the minumum number of operations is
 * always 0, 1 or 2. If already at the destination point (0, 0) so are 0
 * operations needed. Otherwise the move can possibly be done diagonally in 1
 * operation if the Euclidian distance happens to be an integer. And finally if
 * not possible to move in 0 or 1 operations we can always split the move
 * operation into a first pure horizontal move and a second pure vertical move
 * becuse then we get:
 *
 * ((0 - x)^2 + (0 - 0)^2)^0.5 + ((0 - 0)^2 + (0 - y)^2)^0.5 ->
 * ((-x)^2)^0.5 + ((-y)^2)^0.5 ->
 * x + y
 *
 * And the resulting sum x + y will be an integer because both x and y are
 * integers.
 */

#include <iostream>
#include <cmath>

int main()
{
    int t;
    std::cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        int x;
        int y;
        int numOfOperations;
        std::cin >> x >> y;

        // Calculate the Euclidian distance.
        double d = std::sqrt(x * x + y * y);
        if (d == 0)
        {
            numOfOperations = 0;
        }
        else if (std::floor(d) == d)
        {
            numOfOperations = 1;
        }
        else
        {
            numOfOperations = 2;
        }
        std::cout << numOfOperations << '\n';
    }
}
