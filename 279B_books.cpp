#include <iostream>

using namespace std;

void selectionSort(int arr[], int numOfCols);


int main()
{
    int t, n, count = 0, total = 0, cutOff = 0;

    cin >> n >> t;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        total += arr[i];

        if (total <= t)
        {
            count++;
        }
        else
        {
            total -= arr[cutOff];
            cutOff++;
        }
    }

    cout << count << endl;



    return 0;
}
