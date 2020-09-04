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
    int totTestCase;

    cin >> totTestCase;

    for (int testCaseCounter = 0; testCaseCounter < totTestCase; testCaseCounter++)
    {
        long long int n, k;

        cin >> n >> k;


        if ((n % 2 == k % 2) && (k * k <= n))
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
