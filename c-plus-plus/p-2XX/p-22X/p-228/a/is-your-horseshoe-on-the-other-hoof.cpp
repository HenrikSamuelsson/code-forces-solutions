#include <iostream>
#include <set>

int main(void)
{
    using namespace std;
    int s;
    // empty set container
    set<int, greater<int> > s1;
    for(int i = 0; i < 4; i++)
    {
        cin >> s;
        s1.insert(s);
    }

    cout << 4 - s1.size() << endl;

    return 0;
}