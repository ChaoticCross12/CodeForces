#include <iostream>

using namespace std;

int main()
{
    long int totCash, counter = 0;

    cin >> totCash;

    while (totCash > 0)
    {
        if (totCash >= 100)
        {
            totCash -= 100;
            counter++;
        }
        else if (totCash >= 20)
        {
            totCash -= 20;
            counter++;
        }
        else if (totCash >= 10)
        {
            totCash -= 10;
            counter++;
        }
        else if (totCash >= 5)
        {
            totCash -= 5;
            counter++;
        }
        else
        {
            counter += totCash;
            totCash = 0;
        }
    }

    cout << counter << endl;


    return 0;
}
