#include <iostream>
#include <string>

using namespace std;


int main()
{
    string str;
    long int inNumber;
    cin >> str;
    bool isLucky = true;

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] != '4' && str[i] != '7')
        {
            isLucky = false;
        }
    }

    if(isLucky)
    {
        cout << "YES";
        return 0;
    }

    inNumber = stoi(str);

    if(inNumber % 4 == 0 || inNumber % 7 == 0 || inNumber % 47 == 0)
    {
        cout << "YES";
        return 0;
    }

    cout << "NO";

    return 0;
}