#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


int main()
{
    string str, newStr;
    cin >> str;
    bool first = true, between = false;
    int i, range = str.length() - 2;
    
    for (i = 0; i < range; i++)
    {
        string temp = str.substr(i, 3);
        if(temp == "WUB")
        {
            between = true;
            i+= 2;
        }
        else
        {
            if(first)
            {
                newStr += str[i];
                first = false;
                between = false;
            }

            else
            {
                if(between)
                {
                    newStr += " ";
                    newStr += str[i];
                    between = false;
                }
                else
                {
                    newStr += str[i];
                }
            }
        }
    }

    if (i != str.length())
    {
        if(between)
        {
            newStr += " ";
            newStr += str.substr(i, str.length());
        }

        else
        {
            newStr += str.substr(i, str.length());
        }
    }
    cout << newStr;


    return 0;
}