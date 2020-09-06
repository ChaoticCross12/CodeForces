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


// Function Prototypes                                        REMOVE IF NOT USED

/********************
**  MAIN FUNCTION  **
********************/

int main()
{
    // Variable declaration(s)

    int totTestCase, arrLength;


    cin >> totTestCase;


    for (int testCaseCount = 0; testCaseCount < totTestCase; testCaseCount++)
    {
        cin >> arrLength;

        int arr[arrLength];
        int evenCounter = 0, oddCounter = 0, outOfPlaceCOunter = 0;

        for (int elem = 0; elem < arrLength; elem++)
        {
            cin >> arr[elem];

            if ((arr[elem] % 2) != (elem % 2))
            {
                outOfPlaceCOunter++;
            }

            if (arr[elem] % 2 == 0)
            {
                evenCounter++;
            }
            else
            {
                oddCounter++;
            }

        }


        // If even
        if ((arrLength % 2 == 0) && (evenCounter == oddCounter))
        {
            cout << (outOfPlaceCOunter / 2) << endl;

        }

        // If odd
        else if ((arrLength % 2 != 0) && (evenCounter ==( oddCounter + 1)))
        {
            cout << (outOfPlaceCOunter / 2) << endl;
        }

        else
        {
            cout << "-1" << endl;
        }
    }


    return 0;
}

/*
  func1 description                                           REMOVE IF NOT USED
  PARAM
  RETURN
*/
