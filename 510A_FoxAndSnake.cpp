#include <iostream>

using namespace std;


int main()
{
    long int r, c;
    cin >> r >> c;
    bool nextRight = true;

    for (long int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
        {
            cout << string(c, '#') << endl;
        }
        else
        {
            if (nextRight)
            {
                cout << string(c - 1, '.') << '#' << endl;
                nextRight = false;
            }
            else
            {
                nextRight = true;
                cout << '#' << string(c - 1, '.') << endl;
            }
        }
    }




    return 0;
}