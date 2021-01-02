#include <iostream>

using namespace std;


int main()
{
    long long int a, b;
    int counter = 0;
    cin >> a >> b;

    while (a <= b)
    {
        a *= 3;
        b *= 2;
        counter++;
    }

    cout << counter << endl;



    return 0;
}