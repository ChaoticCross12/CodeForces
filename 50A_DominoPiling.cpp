#include <iostream>

using namespace std;


int main()
{
    int side1, side2, numOfDon = 0;

    cin >> side1 >> side2;

    if (side1 % 2 == 0)
    {
        numOfDon = side2 * (side1 / 2);
    }

    else if (side2 % 2 == 0)
    {
        numOfDon = side1 * (side2 / 2);
    }

    else
    {
        if (side1 > 2)
        {
            numOfDon = side2 * ((side1 - 1) / 2);
            numOfDon += side2 / 2;
            

        }

        else if (side2 > 2)
        {
            numOfDon = side1 * ((side2 - 1) / 2);
            numOfDon += side1 / 2;
        }

    }

    cout << numOfDon << endl;


    return 0;
}