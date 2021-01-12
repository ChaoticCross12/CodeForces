#include <iostream>
#include <set>
#include <string>

using namespace std;


int main()
{
    int numOfChars;
    string str;
    set<char> characters;

    cin >> numOfChars;
    cin.ignore();
    cin >> str;

    if (numOfChars < 26)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (long int i = 0; i < numOfChars; i++)
    {
        char temp = tolower(str[i]);
        characters.insert(temp);
    }

    if(characters.size() == 26)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }
    

    
    return 0;
}