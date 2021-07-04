#include <iostream>

void getInput(long long *n, long long *m, long long *a);
long long calculateFlagstoneCount(const long long n, const long long m, const long long a);
void setOutput(long long answer);

int main()
{
    // Variables to store the input to the problem.
    long long n;
    long long m; 
    long long a;

    // Variable to hold the answer to the problem.
    long long flagStoneCount;

    getInput(&n, &m, &a);
    flagStoneCount = calculateFlagstoneCount(n, m, a);
    setOutput(flagStoneCount);

    return EXIT_SUCCESS;
}

void getInput(long long *n, long long *m, long long *a)
{
    std::cin >> *n;
    std::cin >> *m;
    std::cin >> *a;
}

long long calculateFlagstoneCount(const long long n, const long long m, const long long a)
{
    long long col;    // Required number of flag stone columns.
    long long row;    // Required number of flag stone rows.
    long long stones; // Total number of required stones.
    
    // Deduce the number of needed columns.
    if (0 == n % a)
    {
        // The flag stones will match up exactly in this dimension.
        col = n / a;
    }
    else
    {
        // No exact match.
        // The last flag stone in each column will be a bit on the outside.
        col = n / a + 1;
    }

    // Deduce the number of needed rows.
    if (0 == m % a)
    {
        // The flag stones will match up exactly in this dimension.
        row = m / a;
    }
    else
    {
        // No exact match.
        // The last flag stone in each row will be a bit on the outside.
        row = m / a + 1;
    }

    // Total number of stones will be the columns times the rows.
    stones = col * row;
    
    return stones;
}

void setOutput(long long answer)
{
    std::cout << answer << std::endl;
}
