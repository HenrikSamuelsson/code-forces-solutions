//! @file solution-1512-a.cpp
//! @brief Solution to the Codeforces problem Spy Detected!
//! @details The problem description can be found here:
//!          https://codeforces.com/problemset/problem/1512/A

#include <cstdlib>
#include <iostream>

using namespace std;

//! @defgroup globals    Globale Variables
//! @{

//! @brief Default number of test cases is one (1) test case.
const int DEFAULT_NUMBER_OF_TEST_CASES = 1;

//! @brief Maximum length of the input test data input array.
const size_t MAX_LENGTH = 100; 

//! @brief The number of test cases that will be solved.
int numberOfTestCases = DEFAULT_NUMBER_OF_TEST_CASES;

//! @} // End of the group globals.

typedef struct testData_t
{
    size_t length;
    int array[MAX_LENGTH];
}testData_t;

int getNumberOfTestCases(void);
int solve(testData_t testData);

int main(void)
{
    numberOfTestCases = getNumberOfTestCases();
    for (size_t testCaseCount = 0; testCaseCount < numberOfTestCases; testCaseCount++)
    {
        testData_t testData;
        cin >> testData.length;
        for (size_t arrayInputIndex = 0; arrayInputIndex < testData.length; arrayInputIndex++)
        {
            cin >> testData.array[arrayInputIndex];
        }
        int result = solve(testData);
        cout << result << "\n";
    }

    return EXIT_SUCCESS;
}

int solve(testData_t testData)
{
    int normal = 0;

    // Check the three first entries to deduce what the normal number is.
    if (testData.array[0] == testData.array[1])
    {
        normal = testData.array[0];
    }
    else if (testData.array[0] == testData.array[2])
    {
        normal = testData.array[0];
    }
    else if (testData.array[1] == testData.array[2])
    {
        normal = testData.array[1];
    }

    // Locate the array entry that differs from the normal number.
    size_t index = 0;
    for (index = 0; index < testData.length; index++)
    {
        if (testData.array[index] != normal)
        {
            break;
        }
    }
    return index + 1;   // Add 1 due to that arrays at codeforces start with 1 and not 0.
}

//! @brief Get the number of test cases.
//! @details Invoke on problems that includes multiple test cases.
int getNumberOfTestCases(void)
{
    int t;
    cin >> t;
    return t;
}
