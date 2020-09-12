#include <iostream>
#include <string>

using namespace std;


int main()
{
    int totTestCase;
    int first;
    int testCaseCount;

    cin >> totTestCase;

    string s[totTestCase];

    bool seatsFound = false;

    for (int i = 0; i < totTestCase; i++)
    {
        cin >> s[i];
    }



    for (testCaseCount = 0; testCaseCount < totTestCase; testCaseCount++)
    {


        for (first = 0; first < s[testCaseCount].length() - 1; first++)
        {
            string checkStr = s[testCaseCount];
            if (checkStr[first] == 'O' && checkStr[first + 1] == 'O')
            {
                seatsFound = true;
                s[testCaseCount][first] = '+';
                s[testCaseCount][first + 1] = '+';
                break;
            }
        }

        if (seatsFound)
        {
            break;
        }
    }

    if (seatsFound)
    {
        cout << "YES" << endl;
        for (int i = 0; i < totTestCase; i++)
        {
            cout << s[i] << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }






    return 0;
}
