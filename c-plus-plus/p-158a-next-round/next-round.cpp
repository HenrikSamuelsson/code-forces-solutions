#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main()
{
    int k;                         // K-th place finisher in contest.
    int n;                         // Number of particpants in the contest.
    int kScore;                    // The score of the k-th place finisher.
    std::vector<int> scoreData;    // The score of all the participants.
    std::string lineBuffer;        // Buffer used when reading the input data

    // Get the input about what k and n is in this case.
    std::getline(std::cin, lineBuffer);
    std::stringstream infoDataStream(lineBuffer);
    infoDataStream >> k >> n;
    
    // Get the list of scores.
    std::getline(std::cin, lineBuffer);
    std::stringstream scoreStream(lineBuffer);
    int score;
    while(scoreStream >> score)
    {
        scoreData.push_back(score);
    }

    // Find what the K-th place finisher scored.
    kScore = scoreData[n-1];

    // Count number of participants that scored more than 0 
    // and also scored more or equal to particpant k.
    int nextroundParticipants = 0;
    for(const auto& value: scoreData) {
        if (value > 0 && value >= kScore)
        {
            nextroundParticipants++;
        }
    }

    // Output the result.
    std::cout << nextroundParticipants << std::endl;

    return 0;
}
