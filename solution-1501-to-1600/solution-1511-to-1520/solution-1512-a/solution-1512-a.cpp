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
    for (size_t testCaseCount = 0; testCaseCount < numberOfTestCases; testCount++)
    {
        testData_t testData;
        cin >> testData.length;
        for (size_t arrayInputIndex = 0; arrayInputIndex < testData.length; arrayInputIndex++)
        {
            cin >> testData.array[arrayInputIndex];
        }
        int result = solve(testData);
    }

    return EXIT_SUCCESS;
}

int solve(testData_t testData)
{

}

//! @brief Get the number of test cases.
//! @details Invoke on problems that includes multiple test cases.
int getNumberOfTestCases(void)
{
    int t;
    cin >> t;
    return t;
}
