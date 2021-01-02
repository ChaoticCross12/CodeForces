#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    long long int n, answer = 0;
    cin >> n;

    if (n % 2 == 0)
    {
        answer = n / 2;

    }

    else
    {
        answer =  ((n - 1) / 2) - n;
    }

    cout << answer << endl;


    return 0;
}