#include <iostream>
#include <algorithm>


using namespace std;


int main()
{
    int a, b, m;
    bool simon = false;

    cin >> a >> b >> m;

    while (m > 0)
    {
        if (!simon)
        {

            m -= __gcd(a, m);
            if (m < 0)
            {
                break;
            }
            else
            {
                simon = true;
            }
        }
        else
        {

            m -= __gcd(b, m);

            if (m < 0)
            {
                break;
            }
            else
            {
                simon = false;
            }
        }

        // Debug
        //cout << m << endl;
    }

    if (simon)
    {
        cout << 0 << endl;
    }

    else
    {
        cout << 1 << endl;
    }



    return 0;
}
