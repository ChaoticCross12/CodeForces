#include <iostream>

using namespace std;

int main()
{
    int number;

    cin >> number;

    if (number % 2 == 0)
    {
        cout << 4 << " " << number - 4 << endl;
    }

    else
    {
        cout << 9 << " " << number - 9 << endl;
    }


    return 0;
}
