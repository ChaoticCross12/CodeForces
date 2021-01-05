#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    vector<int> vect;

    long int tot, expense = 0;
    cin >> tot;

    for (long i = 0; i < tot; i++)
    {
        int temp;
        cin >> temp;

        vect.push_back(temp);
    }
    
    sort(vect.begin(), vect.end(), greater<int>());

    int greatest = vect[0];

    for (auto val : vect)
    {
        if (val < greatest)
        {
            expense += greatest - val;
        }
    }

    cout << expense << endl;





    return 0;
}