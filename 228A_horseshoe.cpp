#include <iostream>


using namespace std;

int main()
{
    int shoesOwned[4], count = 0;


    for (int elem = 0; elem < 4; elem++)
    {
        cin >> shoesOwned[elem];
    }

    for (int left = 0; left < 3; left++)
    {
        for (int right = left + 1; right < 4; right++)
        {
            //cout << shoesOwned[left] <<  " " << shoesOwned[right] << endl;
            if (shoesOwned[left] == shoesOwned[right])
            {
                count++;
                break;
            }
        }
    }

    cout << count << endl;


    return 0;
}
