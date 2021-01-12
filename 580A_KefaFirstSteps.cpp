#include <iostream>

using namespace std;

int main()
{
    long int n, length = 1, tempPrev, highestLength = 1;
    cin >> n;
    cin >> tempPrev;

    for (long int i = 1; i < n; i++)
    {
        long int tempNew;
        cin >> tempNew;


        if(tempNew >= tempPrev)
        {
            length++;
            //cout << "Length is set to " << length << " because of" << tempNew << endl;
        }
        else
        {
            length = 1;
        }

        tempPrev = tempNew;

        if (length > highestLength)
        {
            highestLength = length;
        }
        
    }
    

    cout << highestLength << endl;

    return 0;
}