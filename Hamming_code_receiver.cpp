#include <iostream>
#include <string>

using namespace std;

int main()
{
    string stuffed;

    cout << "Enter Stuffed Code Word: ";
    cin >> stuffed;

    string destuffed = "";
    int consecutiveOnes = 0;

    for (int i = 0; i < stuffed.length(); i++)
    {
        char bit = stuffed[i];

        destuffed += bit;

        if (bit == '1')
        {
            consecutiveOnes++;
        
            if (consecutiveOnes == 5)
            {
                if (i + 1 < stuffed.length() && stuffed[i + 1] == '0')
                {
                    i++;
                }

                consecutiveOnes = 0;
            }
        }
        else
        {
            consecutiveOnes = 0;
        }
    }

    cout << "\nStuffed Code Word   : " << stuffed << endl;
    cout << "Destuffed Code Word : " << destuffed << endl;

    return 0;
}