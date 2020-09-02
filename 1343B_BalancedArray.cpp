#include <iostream>

using namespace std;


int main()
{
    int totTestCase;
    cin >> totTestCase;

    for (int testCaseCounter = 0; testCaseCounter < totTestCase; testCaseCounter++)
    {
        int n;
        cin >> n;

        if ((n / 2) % 2 != 0)
        {
            cout << "NO" << endl;
        }

        else
        {
            cout << "YES" << endl;

            int evens = 0;
            int odds = -1;

            for (int i = 0; i < n; i++)
            {
                if (i < (n / 2))
                {
                    evens += 2;
                    cout << evens << " ";
                }

                else if (i < (n - 1))
                {
                    odds += 2;
                    cout << odds << " ";
                }

                else
                {
                    odds += (2 + (n / 2));
                    cout << odds << " ";
                }

            }

            cout << endl;
        }
    }

    return 0;
}
