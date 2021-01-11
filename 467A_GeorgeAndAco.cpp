#include <iostream>

using namespace std;


int main()
{
    long int n, p, q, i = 0, counter = 0;
    cin >> n;

    while(i < n)
    {
        cin >> p >> q;
        if (q - p >= 2)
        {
            counter++;
        }

        i++;
    }

    cout << counter << endl;


    return 0;
}