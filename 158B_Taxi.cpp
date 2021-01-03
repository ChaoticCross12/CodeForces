#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main()
{
    int groups;
    cin >> groups;

    vector<int> list;

    for (int i = 0; i < groups; i++)
    {
        int temp;
        cin >> temp;
        list.push_back(temp);
    }

    sort(list.begin(), list.end());


    for (auto val : list)
    {
        cout << val << " ";
    }
    cout << endl;
    
    int holder = 0, carCount = 0;
    for (int i = list.size() - 1; i >= 0; i--)
    {
        if (holder < 4)
        {
            holder += list[i];
            cout << "added: " << list[i] << endl;
        }

        else
        {
            cout << "set to zero" << endl;
            carCount++;
            holder = 0;
            i += 2;
        }
    }

    cout << carCount << endl;


    return 0;
}
