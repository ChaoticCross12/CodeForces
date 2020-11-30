#include <iostream>

using namespace std;


int main()
{
        
    long long int length, numOfCoins = 0, zeroCount = 0, negCount = 0;

    cin >> length;

    long long int array[length];

    for (int input = 0; input < length; input++)
    {
        cin >> array[input];

        if (array[input] > 1)
        {
            int temp = array[input] - 1;
            array[input] = 1;
            numOfCoins += temp;
        }

        else if (array[input] < - 1)
        {
            int temp = abs(array[input]) - 1;
            array[input] = -1;
            numOfCoins += temp;
            negCount++;
        }

        else if (array[input] == -1)
        {
            negCount++;
        }

        else if (array[input] == 0)
        {
            zeroCount++;
        }
    }

    if ((negCount % 2) == 0)
    {
        numOfCoins += zeroCount;
    }

    else if (!((negCount % 2) == 0))
    {
        if (zeroCount > 0)
        {
            numOfCoins += zeroCount;
        }

        else
        {
            numOfCoins += 2;
        }
        
    }


    cout << numOfCoins;




    return 0;
}