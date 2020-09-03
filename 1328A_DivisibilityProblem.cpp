#include <iostream>

using namespace std;

int main()
{
    long int totTestCase;
    cin >> totTestCase;


    for (int testCaseCount = 0; testCaseCount < totTestCase; testCaseCount++)
    {
        long int a, b;
        cin >> a >> b;

        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << b - (a % b) << endl;
        }
    }


}
