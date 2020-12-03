#include <iostream>


using namespace std;

int main()
{
    int totTestCase;
    cin >> totTestCase;


    for (int testCaseCount = 0; testCaseCount < totTestCase; testCaseCount++)
    {
        int arrLength, toChoose, oddCounter = 0, evenCounter = 0, temp;
        cin >> arrLength >> toChoose;

        for (int elem = 0; elem < arrLength; elem++)
        {
            cin >> temp;
            if (temp % 2 == 0)
            {
                evenCounter++;
            }
            else
            {
                oddCounter++;
            }
        }


        if (oddCounter == 0)
        {
            cout << "No" << endl;
            continue;
        }

        if (toChoose >= oddCounter)
        {
            if (oddCounter % 2 != 0)
            {
                cout << "Yes" << endl;
                continue;
            }

            else if ((oddCounter % 2 == 0) && (oddCounter - 1 + evenCounter >= toChoose))
            {
                cout << "Yes" << endl;
                continue;
            }
        }
        else
        {
            if (toChoose % 2 == 0 && evenCounter > 0)
            {
                cout << "Yes" << endl;
                continue;
            }

            else if (toChoose % 2 != 0)
            {
                cout << "Yes" << endl;
                continue;
            }
        }
        

        cout << "No" << endl;

        
    }





   return 0;
}