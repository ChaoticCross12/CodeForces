#include <iostream>

using namespace std;


int main()
{
    int totTeseCase;

    cin >> totTeseCase;


    for (int testCaseCount = 0; testCaseCount < totTeseCase; testCaseCount++)
    {
        int lengthOfArr, oneCounter = 0, zeroCounter = 0;

        cin >> lengthOfArr;

        int arr[lengthOfArr];

        for (int elem = 0; elem < lengthOfArr; elem++)
        {
            cin >> arr[elem];

            if (arr[elem] == 1)
            {
                oneCounter++;
            }
            else
            {
                zeroCounter++;
            }
        }

        if (lengthOfArr == 2)
        {
            if ((zeroCounter % 2 != 0) && (oneCounter % 2 != 0))
            {
                oneCounter--;
            }
        }

        else
        {

            if (zeroCounter % 2 != 0)
            {
                zeroCounter--;
            }
            if (oneCounter % 2 != 0)
            {
                oneCounter--;
            }
        }

        cout << (zeroCounter + oneCounter) << endl;

        for (int ones = 0; ones < oneCounter; ones++)
        {
            cout << 1 << " ";
        }


        for (int zeroes = 0; zeroes < zeroCounter; zeroes++)
        {
            cout << 0 << " ";
        }


        cout << endl;


    }



    return 0;
}
