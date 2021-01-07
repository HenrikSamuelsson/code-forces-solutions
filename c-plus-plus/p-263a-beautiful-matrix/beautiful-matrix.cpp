#include <iostream>
#include <math.h>

int main()
{
    const int lineCount = 5;    // Number of lines in the matrix.
    const int colCount = 5;    // Number of columns in the matrix.

    int lineIndex = 0;
    int colIndex = 0;

    std::string line;
    for (int l = 0; l < lineCount; l++)
    {
        std::getline(std::cin, line);
        int colIndexTemp = 0; 
        for (int c = 0; c < line.length(); c++)
        {
            if (line[c] == '1')
            {
                lineIndex = l;
                colIndex = colIndexTemp;
            }
            else if (line[c] == '0')
            {
                colIndexTemp++;
            }
        }
    }

    int moves = 0;

    switch (lineIndex)
    {
        case 0:
        moves += 2;
        break;
        case 1:
        moves += 1;
        break;
        case 3:
        moves += 1;
        break;
        case 4:
        moves += 2;
        break;
    }

   switch (colIndex)
    {
        case 0:
        moves += 2;
        break;
        case 1:
        moves += 1;
        break;
        case 3:
        moves += 1;
        break;
        case 4:
        moves += 2;
        break;
    }

    std::cout << moves << std::endl;

    return 0;
}
