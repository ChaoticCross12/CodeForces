#include <iostream>
#include <string>

using namespace std;


int main()
{
    long int m, s, s1, m1, length9 = 0;
    cin >> m1 >> s1;
    string greatest = "", smallest = "";

    s = s1;
    m = m1;

    if ( m * 9 < s)
    {
        cout << "-1 -1" << endl;
        return 0;
    }

    while ((s > 0))
    {

        // Largest

        if (s >= 9)
        {
            greatest += '9';
            s -= 9;
        }
        else
        {
            length9 = greatest.length();
            greatest += to_string(s);
            smallest += to_string(s);
            s = 0;
        }
        m--;
    }

    if (m != 0)
    {
        for(int i = 0; i < m; i++)
        {
            if (m == m1)
            {
                cout << "-1 -1" << endl;
                return 0;
            }
            greatest += "0";
            smallest += "0";
        }
        
    }

    for(int i = 0; i < length9; i++)
        {
            smallest += "9";
        }








    cout << smallest << " " << greatest;

    return 0;
}