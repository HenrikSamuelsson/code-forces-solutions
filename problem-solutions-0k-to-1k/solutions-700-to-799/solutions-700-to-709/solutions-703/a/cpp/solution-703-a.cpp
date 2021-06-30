#include <iostream>

int main()
{
    // Get number of rounds.
    int n;
    std::cin >> n;

    int mScore = 0;    // Mishka's score.
    int cScore = 0;    // Chris's score.

    // Collect data and check who wins each round.
    while (n--)
    {
        int m;
        int c;

        std::cin >> m >> c;

        if (m > c)
        {
            mScore++;
        }
        else if (c > m)
        {
            cScore++;
        }
        else
        {
            // Do nothing, both players rolled the same so no-one gets points.
        }
    }

    // Present the result
    if (mScore > cScore)
    {
        std::cout << "Mishka" << std::endl;
    }
    else if (cScore > mScore)
    {
        std::cout << "Chris" << std::endl;
    }
    else
    {
        std::cout << "Friendship is magic!^^";
    }

    return EXIT_SUCCESS;
}
