#include <iostream>


using namespace std;


int main()
{
    int m, n, i = 1;

    cin >> n >> m;

    while(i <= n)
    {
        if (i % m == 0)
        {
            n++;
        }


        i++;
    }

    cout << n << endl;


    return 0;
}
