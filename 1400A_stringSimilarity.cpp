/*
  Function description
*/
#include<bits/stdc++.h>
#include <iostream>
// #include <cmath>                                           REMOVE IF NOT USED
// #include <cstdlib>                                         REMOVE IF NOT USED
#include <string>
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


    for (int testCaseCount = 0; testCaseCount < totTestCase; testCaseCount++)
    {
        int n;

        cin >> n;

        string s;

        cin >> s;

        char required = s[n - 1];

        cout << string(n, required) << endl;

    }

    return 0;
}

/*
  func1 description                                           REMOVE IF NOT USED
  PARAM
  RETURN
*/
