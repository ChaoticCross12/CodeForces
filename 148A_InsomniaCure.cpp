#include <iostream>

using namespace std;


int main()
{
    long int k, l, m, n, d, hurt = 0;
    cin >> k >> l >> m >> n >> d;


    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << d << endl;
        return 0;
    }

    else
    {
        for (long int i = 1; i <= d; i++)
        {
            if ((i >= k && i % k == 0) || (i >= l && i % l == 0) || (i >= m && i % m == 0) || (i >= n && i % n == 0))
            {
                hurt++;
            }  
        }
    }

    cout << hurt << endl;

    return 0;
}