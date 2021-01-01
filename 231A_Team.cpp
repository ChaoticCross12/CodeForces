#include <iostream>

using namespace std;


int main()
{
    int numOfTestcases, problemsToWrite = 0;

    cin >> numOfTestcases;


    for (int testCaseCount = 0; testCaseCount < numOfTestcases; testCaseCount++)
    {
        int sum = 0, temp;
        for (int i = 0; i < 3; i++)
        {
            cin >> temp;
            sum += temp;
        }

        if (sum >= 2)
        {
            problemsToWrite += 1;
        }
    }


    cout << problemsToWrite;

    return 0;
}