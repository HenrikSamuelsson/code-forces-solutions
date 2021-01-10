#include <iostream>
#include <sstream>
#include<string>
#include <vector>

int main()
{
    int k;                         // K-th place finisher in contest.
    int n;                         // Number of particpants in the contest.
    int kScore;                    // The score of the k-th place finisher.
    std::vector<int> scoreData;    // The score of all the participants.
    std::string lineBuffer;        // Buffer used when reading the input data

    // First get the input about what k and n is in this case.
    std::getline(std::cin, lineBuffer);
    std::stringstream lineStream(lineBuffer);
    lineStream >> k >> n;
    
    return 0;
}