#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int moves = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int temp;
            cin >> temp;

            if (temp == 1)
            {
                cout << abs(i + 1 - 3) + abs(j + 1 - 3) << endl;
                return 0;
            }
        }
    }

    


    return 0;
}