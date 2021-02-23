#include <iostream>

int main()
{
    using namespace std;
    int n;
    cin >> n;
    int sum = 0;
    for (size_t s = 0; s < n; s++)
    {
        string polyhedron;
        cin >> polyhedron;
        if (polyhedron == "Tetrahedron")
        {
            sum += 4;
        }
        else if (polyhedron == "Cube")
        {
            sum += 6;
        }
        else if (polyhedron == "Octahedron")
        {
            sum += 8;
        }
        else if (polyhedron == "Dodecahedron")
        {
            sum += 12;
        }
        else if (polyhedron == "Icosahedron")
        {
            sum += 20;
        }
    }
    cout << sum << endl;
    return 0;
}