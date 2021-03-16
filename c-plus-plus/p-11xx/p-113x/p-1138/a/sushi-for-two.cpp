#include <iostream>
#include <vector>

int main ()
{
    using namespace std;

    const int TUNA = 1;
    const int EEL = 2;

    int n;
    cin >> n;

    int ones = 0;
    int twos = 0;

    vector<int> s;
    for (size_t i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        s.push_back(t);
    }

    // Setup start state based on the first type sushi in the vector s.
    bool lastWasTuna;
    int tunaCount = 0;
    int eelCount = 0;
    if (TUNA == s[0])
    {
        //cout << "First is TUNA" << endl;
        tunaCount = 1;
        lastWasTuna = true;
    }
    else
    {
        //cout << "First is EEL" << endl;
        eelCount = 1;
        lastWasTuna = false;
    }
    
    int result = 0;

    for (size_t i = 1; i < s.size(); i++)
    {
        //cout << "i = " << i << endl;
        
        if (TUNA == s[i])
        {
            if (lastWasTuna)
            {
                // We are in a tuna sequence.
                tunaCount++;
            }
            else
            {
                // End of a eel sequence, check if the sequence was a record.
                int subResult = min(tunaCount, eelCount);
                if (subResult > result)
                {
                    result = subResult;
                }
                //cout << "eelCount " << eelCount << endl;
                //cout << "tunaCount " << tunaCount << endl;
                // Start over counting tunas
                tunaCount = 1;
                lastWasTuna = true;
            }
        }
        else if (EEL == s[i])
        {
            if (!lastWasTuna)
            {
                // We are in a eel sequence.
                eelCount++;
            }
            else
            {
                // End of a sequence, check if the sequence was a record.
                int subResult = min(tunaCount, eelCount);
                if (subResult > result)
                {
                    result = subResult;
                }
                //cout << "eelCount " << eelCount << endl;
                //cout << "tunaCount " << tunaCount << endl;
                // Start over counting tunas
                eelCount = 1;
                lastWasTuna = false;
            }
        } 
    }

    // Final end of data do one final check for record.
    int subResult = min(tunaCount, eelCount);
    if (subResult > result)
    {
        result = subResult;
    }

    cout << 2 * result << endl;

    return 0;
}
