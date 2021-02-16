#include <iostream>

int main()
{
    using namespace std;
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    // Create an array to track the damage status of each dragon.
    bool *damage{ new bool[d]{} };
    for (int i = 1; i <= d; i++)
    {
        damage[i - 1] = false;
    }

    // Apply damage to dragons.
    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            damage[i - 1] = true;
        }
    }

    // Count the number of damaged dragons.
    int c = 0;
    for (int i = 1; i <= d; i++)
    {
        if (damage[i - 1])
        {
            c++;
        }
    }
    cout << c << endl;

    return 0;
}
