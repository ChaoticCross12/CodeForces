#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <iterator>


using namespace std;


int main()
{
    int n, line1, line2;
    set<int> theSet;
    
    cin >> n;
    cin >> line1;

    for (int i = 0; i < line1; i++)
    {
        int temp;
        cin >> temp;

        theSet.insert(temp);
    }

    cin >> line2;

    for (int i = 0; i < line2; i++)
    {
        int temp;
        cin >> temp;

        theSet.insert(temp);
    }

    if (theSet.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}