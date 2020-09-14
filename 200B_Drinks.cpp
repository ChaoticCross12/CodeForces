#include <iostream>


using namespace std;


int main()
{
    int bottleCount, n;
    float sum;

    cin >> bottleCount;

    for (int i = 0; i < bottleCount; i++)
    {
        cin >> n;

        sum += n;
    }

    cout << sum / bottleCount << endl;

    return 0;
}
