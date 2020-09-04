/*
  Function description
*/

#include <iostream>
// #include <cmath>                                           REMOVE IF NOT USED
// #include <cstdlib>                                         REMOVE IF NOT USED
// #include <string>                                          REMOVE IF NOT USED
// #include <iomanip>                                         REMOVE IF NOT USED
// #include <cctype>                                          REMOVE IF NOT USED
// #include <fstream>                                         REMOVE IF NOT USED
// #include <ctime>                                           REMOVE IF NOT USED
// #include <cstring>                                         REMOVE IF NOT USED

using namespace std;


// Function Prototypes

/********************
**  MAIN FUNCTION  **
********************/

int main()
{
    int arr[3], lowest, highest;

    cin >> arr[0];
    lowest = highest = arr[0];

    for (int i = 1; i < 3; i++)
    {
        cin >> arr[i];

        if (arr[i] <= lowest)
        {
            lowest = arr[i];
        }

        if (arr[i] >= highest)
        {
            highest = arr[i];
        }

    }

    cout << (highest - lowest) << endl;

    return 0;
}
