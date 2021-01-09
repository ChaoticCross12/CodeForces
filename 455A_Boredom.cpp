#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<int> theList;
    int totGain = 0;
    int length;
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        int temp;
        cin >> temp;

        theList.push_back(temp);
    }


    while(!theList.empty())
    {
        std::cout << "once" << endl;
        int gain = theList[0] - theList[1];
        int idealIndex = 0;

        for (int i = 1; i < theList.size() - 1; i++)
        {
            if (gain < (theList[i] - (theList[i - 1] + theList[i + 1])))
            {
                gain = theList[i] - (theList[i - 1] + theList[i + 1]);
                idealIndex = i;
            }
        }

        int finalPotGain = theList[theList.size() - 1] - theList[theList.size() - 2];

        if (gain < finalPotGain)
        {
            gain = finalPotGain;
            idealIndex = theList.size() - 1;
        }

        totGain += gain;

        if (idealIndex == 0)
        {
            theList.erase(theList.begin(), theList.begin() + 2);
        }
        else if (idealIndex == theList.size() - 1)
        {
            theList.erase(theList.end() - 1, theList.end());
        }

        else
        {
            theList.erase(theList.begin() + idealIndex - 1, theList.begin() + idealIndex + 1);
        }
        cout << totGain << endl;
        
    }

    return 0;
}