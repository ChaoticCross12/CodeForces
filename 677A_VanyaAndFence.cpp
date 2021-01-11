#include<iostream>

using namespace std;


int main()
{
    long int n, h, widthOfRoad = 0, i = 0;
    cin >> n >> h;

    while (i < n)
    {
        long int temp;
        cin >> temp;

        if (temp > h)
        {
            widthOfRoad += 2;
        }
        else
        {
            widthOfRoad++;
        }

        i++;
    }

    cout << widthOfRoad << endl;


    return 0;
}