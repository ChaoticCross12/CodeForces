#include <iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (temp)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }

    cout << "EASY" << endl;


    return 0;
}