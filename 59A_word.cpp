#include <iostream>
#include <string>

using namespace std;

int main()
{
    string testStr;

    cin >> testStr;

    int upperCount = 0; int lowerCount = 0;


    for (int i = 0; i < testStr.size(); i++)
    {
        if (isupper(testStr[i]))
        {
            upperCount++;
        }
    }

    if (upperCount > (testStr.size() / 2))
    {
        for (int i = 0; i < testStr.size(); i++)
        {
            cout << static_cast<char>(toupper(testStr[i]));
        }
    }

    else if (upperCount < (testStr.size() / 2))
    {
        for (int i = 0; i < testStr.size(); i++)
        {
            cout << static_cast<char>(tolower(testStr[i]));
        }
    }

    else
    {
        for (int i = 0; i < testStr.size(); i++)
        {
            cout << static_cast<char>(tolower(testStr[i]));
        }
    }

    cout << endl;

    return 0;
}
