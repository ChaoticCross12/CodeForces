#include <iostream>

using namespace std;


int main()
{
    int totTestCases;

    cin >> totTestCases;


    for (int testCount = 0; testCount < totTestCases; testCount++)
    {
        int x1, x2, x3, y1, y2, y3;
        int remainder = 0, sum = 0;

        cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;

        if (x3 > y2)
        {
            remainder = x3 - y2;
            sum = 2 * y2;

            int bad = (y3 - (remainder + x1));

            if (bad > 0)
            {
                sum -= (2 * bad);


            }
        }

        else
        {
            sum = 2 * x3;

            int bad =(y3 - x1);

            if (bad > 0)
            {
                sum -= (2 * bad);
            }
        }

        cout << sum << endl;
    }
    return 0;
}
