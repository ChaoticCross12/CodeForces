/*
  Function description
*/

#include <iostream>
// #include <cmath>                                           REMOVE IF NOT USED
#include <cstdlib>
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
    // Constant(s)                                            REMOVE IF NOT USED

    // Variable declaration(s)                                REMOVE IF NOT USED

    int totTestCase;


    cin >> totTestCase;


    for (int testCaseCounter = 0; testCaseCounter < totTestCase; testCaseCounter++)
    {
        int numOfElems;

        cin >> numOfElems;

        int arr[numOfElems];

        for (int elemIndex = 0; elemIndex < numOfElems; elemIndex++)
        {
            cin >> arr[elemIndex];
        }


        for(int i = 0; i< numOfElems; i++)
        {
        /*
         * Place currently selected element array[i]
         * to its correct place.
         */
            for(int j=i+1; j<numOfElems; j++)
            {
                /*
                 * Swap if currently selected array element
                 * is not at its correct position.
                 */
                if(arr[i] > arr[j])
                {
                    int temp     = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        bool conditionsMet = true;

        for (int i = 0; i < numOfElems - 1; i++)
        {
            if (!(abs(arr[i] - arr[i + 1]) <= 1))
            {
                conditionsMet = false;

            }
        }

        if (conditionsMet)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}

/*
  func1 description                                           REMOVE IF NOT USED
  PARAM
  RETURN
*/
