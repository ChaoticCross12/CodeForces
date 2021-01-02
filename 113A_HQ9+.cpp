#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    for(auto val : s)
    {
        if (val == 'H' || val == 'Q' || val == '9')
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;

    return 0;
}