#include <iostream>
#include <vector>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int groups;
    int lastCabCap = 4;

    cin >> groups;

    vector<int> list;

    for (int i = 0; i < groups; i++)
    {
        cin >> list[i];
    }

    sort(list.begin(), list.end());


    int i = 0;
    while (lastCabCap >= 0)
    {
        lastCabCap -= list[i];


        i++;
    }


    return 0;
}
