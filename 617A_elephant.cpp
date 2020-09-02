#include <iostream>


using namespace std;

int main()
{
    int x, counter = 0;

    cin >> x;


    while (x > 0)
    {
        if (x % 5 >= 0)
        {
            x -= 5;
        }
        else if (x % 4 >= 0)
        {
            x -= 4;
        }
        else if (x % 3 >= 0)
        {
            x -= 3;
        }
        else if (x % 2 >= 0)
        {
            x -= 2;
        }

        else if (x % 1 >= 0)
        {
            x -= 1;
        }
        counter++;
    }

    cout << counter << endl;


    return 0;
}
