#include <iostream>
#include <string>

using namespace std;


int main()
{
    int numberOfGames, antonWin = 0;
    string wins;

    cin >> numberOfGames;
    cin >> wins;


    for (int i = 0; i < numberOfGames; i++)
    {
        if (wins[i] == 'A')
        {
            antonWin++;
        }
    }

    if (antonWin > (numberOfGames / 2))
    {
        cout << "Anton" << endl;
    }

    else if (antonWin < (numberOfGames / 2))
    {
        cout << "Danik" << endl;
    }

    else
    {
        if (numberOfGames % 2 == 0)
        {
            cout << "Friendship" << endl;
        }

        else
        {
            cout << "Danik" << endl;
        }
    }


    return 0;
}
