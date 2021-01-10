#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    vector<char> holder;
    long int length = str.length();
    
    for(int i = 0; i < length; i+=2)
    {
        holder.push_back(str[i]);
    }

    sort(holder.begin(), holder.end());

    for(int i = 0; i < holder.size(); i++)
    {
        cout << holder[i];

        if(i != holder.size() - 1)
        {
            cout << '+';
        }
    }



    return 0;
}