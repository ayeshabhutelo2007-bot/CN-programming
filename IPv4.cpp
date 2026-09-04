#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string ip;
    cout << "Enter IPv4 address: ";
    cin >> ip;

    string part;
    stringstream ss(ip);

    string byte[4];
    int count = 0;

    while (getline(ss, part, '.'))
    {
        if (count >= 4)
        {
            cout << "Invalid IPv4 Address";
            return 0;
        }

        if (part.empty())
        {
            cout << "Invalid IPv4 Address";
            return 0;
        }

        if (part.length() > 1 && part[0] == '0')
        {
            cout << "Invalid IPv4 Address";
            return 0;
        }

        for (char ch : part)
        {
            if (ch < '0' || ch > '9')
            {
                cout << "Invalid IPv4 Address";
                return 0;
            }
        }

        int value = stoi(part);

        if (value > 255)
        {
            cout << "Invalid IPv4 Address";
            return 0;
        }

        byte[count] = part;
        count++;
    }

    if (count != 4)
    {
        cout << "Invalid IPv4 Address";
        return 0;
    }

    cout << "Valid IPv4 Address";

    int first = stoi(byte[0]);

    if (first >= 1 && first <= 126)
    {
        cout << "\nClass       : A";
        cout << "\nDefault Mask: 255.0.0.0";
        cout << "\nNet ID      : " << byte[0] << ".0.0.0";
        cout << "\nHost ID     : 0." << byte[1] << "." 
             << byte[2] << "." << byte[3];
    }
    else if (first >= 128 && first <= 191)
    {
        cout << "\nClass       : B";
        cout << "\nDefault Mask: 255.255.0.0";
        cout << "\nNet ID      : " << byte[0] << "." 
             << byte[1] << ".0.0";
        cout << "\nHost ID     : 0.0." << byte[2] << "." 
             << byte[3];
    }
    else if (first >= 192 && first <= 223)
    {
        cout << "\nClass       : C";
        cout << "\nDefault Mask: 255.255.255.0";
        cout << "\nNet ID      : " << byte[0] << "." 
             << byte[1] << "." << byte[2] << ".0";
        cout << "\nHost ID     : 0.0.0." << byte[3];
    }
    else if (first >= 224 && first <= 239)
    {
        cout << "\nClass       : D";
        cout << "\nDefault Mask: Not Applicable";
        cout << "\nNet ID      : Not Applicable";
        cout << "\nHost ID     : Not Applicable";
    }
    else
    {
        cout << "\nClass       : E";
        cout << "\nDefault Mask: Not Applicable";
        cout << "\nNet ID      : Not Applicable";
        cout << "\nHost ID     : Not Applicable";
    }

    return 0;
}