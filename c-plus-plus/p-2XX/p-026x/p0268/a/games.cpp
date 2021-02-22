#include <iostream>
#include <vector>

class TeamColors
{
public:
    int h;
    int a;
};

int main()
{
    using namespace std;

    // Get the number of teams.
    int n;
    cin >> n;

    // Get the data about colors for each team.
    vector<TeamColors> teamColors(n);
    for (size_t t = 0; t < teamColors.size(); t++)
    {
        cin >> teamColors[t].h;
        cin >> teamColors[t].a;
    }

    // Count the number of times the host team will use guest uniforms.
    int g = 0;
    for (size_t th = 0; th < teamColors.size(); th++)
    {
        for (size_t ta = 0; ta < teamColors.size(); ta++)
        {
            if (teamColors[th].h == teamColors[ta].a )
            {
                g++;
            }
        }
    }

    // Display the result.
    cout << g << endl;

    return 0;
}
