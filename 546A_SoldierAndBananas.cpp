#include <iostream>

using namespace std;


int main()
{
    long int k, n, w, total = 0, need = 0;

    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        total += i * k;
    }

    need = total - n;

    if (need < 0)
    {
        cout << 0 << endl;
    }

    else
    {
        cout << need << endl;
    }

    return 0;
}