#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int counter = 0;

    cin >> str;


    for (int i = 1; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            counter++;
        }
    }

    if (isupper(str[0]) && counter == str.length() - 1)
    {
        for (int i = 0; i < str.length(); i++)
        {
            cout << static_cast<char>(tolower(str[i]));
        }
    }

    else if (counter == str.length() - 1)
    {
        cout << static_cast<char>(toupper(str[0]));


        for (int i = 1; i < str.length(); i++)
        {
            cout << static_cast<char>(tolower(str[i]));
        }
    }

    else
    {
        cout << str;
    }



    return 0;
}
