#include <iostream>
#include <cmath>

using namespace std;

void selectionSort(int arr[], int numOfCols);

int main()
{
    int totStudents, totPuzzles, diff;

    cin >> totStudents >> totPuzzles;
    int pieceCount[totPuzzles];


    for (int i = 0; i < totPuzzles; i++)
    {
        cin >> pieceCount[i];
    }

    selectionSort(pieceCount, totPuzzles);


    diff = abs((pieceCount[0] - pieceCount[totPuzzles - 1]));

    for (int i = 0; i < totPuzzles - totStudents + 1; i++)
    {
        if (abs((pieceCount[i] - pieceCount[i + totStudents -1]) ) < diff)
        {
            diff = abs(pieceCount[i] - pieceCount[i + totStudents - 1]);
        }
        //cout << i << endl << diff << endl;
    }


    cout << diff << endl;




}


void selectionSort(int arr[], int numOfCols)
{
    int i, min;
    int temp;

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
        arr[colCount] = arr[min];
        arr[min] = temp;
    }
}
