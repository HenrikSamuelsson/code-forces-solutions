#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    
    // Get the number of soldiers to be arranged.
    int numOfSoldiers;
    cin >> numOfSoldiers;

    // Read in the current soldier line up into a vector.
    vector<int> soldierLineUp;
    for (size_t s = 0; s < numOfSoldiers; s++)
    {
        int soldierHeight;
        cin >> soldierHeight;
        soldierLineUp.push_back(soldierHeight);
    }

    size_t minHeightIndex = 0; 
    size_t maxHeightIndex = 0;
    int maxHeight = 0;
    int minHeight = 101;

    // Find the position of the first longest soldier and the last shortest soldier.
    for (size_t i = 0; i < soldierLineUp.size(); i++)
    {
        if (soldierLineUp[i] > maxHeight)
        {
            maxHeightIndex = i;
            maxHeight = soldierLineUp[i];
        }

        if (soldierLineUp[i] <= minHeight)
        {
            minHeightIndex = i;
            minHeight = soldierLineUp[i];
        }
    }

    int seconds;
    if (minHeightIndex >= maxHeightIndex)
    {
        seconds = maxHeightIndex + soldierLineUp.size() - 1 - minHeightIndex;
    }
    else
    {
        seconds = maxHeightIndex + soldierLineUp.size() - 1 - minHeightIndex - 1;
    }
    cout << seconds << endl;
    return 0;
}
