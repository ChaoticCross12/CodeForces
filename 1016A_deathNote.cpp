#include <iostream>

using namespace std;


int main()
{
    int m, n, m2, counter = 0;

    cin >> n >> m;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        counter = 0;
        counter = a[i] / m;

        m = a[i] % m;

        cout << counter << " ";
    }




    return 0;
}
