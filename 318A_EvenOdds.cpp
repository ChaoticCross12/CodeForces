#include <iostream>
#include <vector>

using namespace std;


int main()
{
    long long int n, k;

    cin >> n >> k;

    k = k - 1;

    long long int greatestOddIndex = n - (n / 2) - 1;

    if (k <= greatestOddIndex)
    {
        cout << k * 2 + 1 << endl;
    }

    else
    {
        cout << (k - greatestOddIndex) * 2 << endl;
    }


    return 0;
}
