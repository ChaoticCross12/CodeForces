#include <iostream>


using namespace std;


int main()
{
    int n, m, a;

    long long int countAN = 0, countAM = 0;

    cin >> n >> m >> a;

    while(n > 0)
    {
        countAM++;
        //cout << countAM << endl;

        n -= a;
    }

    while(m > 0)
    {
        countAN++;
        //cout << countAN << endl;

        m -= a;
    }


    cout << (countAM * countAN) << endl;

    return 0;
}
