#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int totalFrames;

    srand(time(0));

    cout << "Enter total number of frames: ";
    cin >> totalFrames;

    for (int frame = 1; frame <= totalFrames; frame++)
    {
        cout << "\nSending frame" << frame << endl;
        cout << "Timer started" << endl;
        int lost = rand() % 2;

        if (lost == 1)
        {
            cout << "Frame" << frame << "is lost" << endl;
            cout << "Timer Expired" << endl;
            cout << "Resending Frame" << frame << endl;
        }

        cout << "Frame" << frame << "received" << endl;
        cout << "Sending ACK" << frame << endl;
        cout << "ACK" << frame << "Received" << endl;
        cout << "Timer stopped" << endl;
    }

    return 0;
}