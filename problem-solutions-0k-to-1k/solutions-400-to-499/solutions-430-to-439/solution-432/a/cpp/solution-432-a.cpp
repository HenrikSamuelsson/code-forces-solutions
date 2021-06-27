#include <iostream>

int main()
{
    const int TEAM_SIZE = 3;
    const int PARTIPACITION_MAX = 5;

    int n;
    std::cin >> n;

    int k;
    std::cin >> k;

    int participants = 0;

    for (size_t i = 0; i < n; i++)
    {
        int y;
        std::cin >> y;
        
        if (PARTIPACITION_MAX - y - k >= 0)
        {
            participants++;
        }
    }

    int answer = participants / TEAM_SIZE;

    std::cout << answer;

    return EXIT_SUCCESS;
}
