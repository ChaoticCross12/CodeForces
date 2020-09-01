#include <iostream>

using namespace std;


void selectionSort(int arr[], int arr2[], int numOfCols);

int main()
{
    int kiritoStrength, totDragon;

    cin >> kiritoStrength >> totDragon;

    int dragStr[totDragon], dragBonus[totDragon];

    for (int j = 0; j < totDragon; j++)
    {
        cin >> dragStr[j] >> dragBonus[j];
        
    }




    selectionSort(dragStr, dragBonus, totDragon);

    int counter = 0;
    for (int i = 0; i < totDragon; i++)
    {
        if (kiritoStrength > dragStr[i])
        {
            kiritoStrength += dragBonus[i];
            counter++;
        }
        else
        {
             cout << "NO" << endl;
             break;
        }
    }

    if (counter == totDragon)
    {
        cout << "YES" << endl;
    }



    return 0;
}


void selectionSort(int arr[], int arr2[], int numOfCols)
{
    int i, min;
    int temp, temp2;

    for (int colCount = 0; colCount < numOfCols - 1; colCount++)
    {
        min = colCount;

        for (i = colCount + 1; i < numOfCols; i++)
        {
            if (arr[i] < arr[min])
            {
                min = i;
            }
        }

        temp = arr[colCount];
        temp2 = arr2[colCount];
        arr[colCount] = arr[min];
        arr2[colCount] = arr2[min];
        arr[min] = temp;
        arr2[min] = temp2;
    }
}
