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
    // Constant(s)                                            REMOVE IF NOT USED

    // Variable declaration(s)                                REMOVE IF NOT USED

    int n, x, testcase;

    cin >> testcase;

    // Algorithm

    for (int j = 0; j < testcase; j++)
    {
      /* code */


        cin >> n >> x;

        if (n < x)
        {
            cout << (x - n) << endl;
        }

        else
        {
            cout << (n + x) % 2 << endl;
        }
    }

    return 0;
}

/*
  func1 description                                           REMOVE IF NOT USED
  PARAM
  RETURN
*/
