#include <iostream>
#include <vector>


using namespace std;



int main()
{
    int numOfStu;
    vector<int> holder1;
    vector<int> holder2;
    vector<int> holder3;


    cin >> numOfStu;


    int stuArr[numOfStu], counter1 = 0, counter2 = 0, counter3 = 0;


    for (int i = 0; i < numOfStu; i++)
    {
        cin >> stuArr[i];

        if (stuArr[i] == 1)
        {
            counter1++;
            holder1.push_back(i);
        }

        else if (stuArr[i] == 2)
        {
            counter2++;
            holder2.push_back(i);
        }

        else if (stuArr[i] == 3)
        {
            counter3++;
            holder3.push_back(i);
        }
    }

    int totTeams;

    if (counter1 <= counter2)
    {
        if (counter1 <= counter3)
        {
            totTeams = counter1;
        }
        else
        {
            totTeams = counter3;
        }
    }
    else
    {
        if (counter2 < counter3)
        {
            totTeams = counter2;
        }
        else
        {
            totTeams = counter3;
        }
    }

    cout << totTeams << endl;

    for (int i = 0; i < totTeams; i++)
    {
        cout << holder1[i] + 1 << " " << holder2[i] + 1 << " "
             << holder3[i] + 1 << endl;
    }



    return 0;
}
