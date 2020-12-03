#include <iostream>
#include <string>

using namespace std;

int main()
{
    int registrations;

    cin >> registrations;

    string arrayOfNames[registrations];
    

    for (int nameCount = 0; nameCount < registrations; nameCount++)
    {
        bool firstRun = true;
        string holder;

        bool namePresent = true;
        cin >> holder;
        int nameLength = holder.length();


        while(namePresent)
        {
            namePresent = false;
            int checkName;

            for (checkName = nameCount; checkName >= 0; checkName--)
            {
                if (holder == arrayOfNames[checkName])
                {
                    namePresent = true;
                    break;
                }
            }


            if ((firstRun == true) && (namePresent == true))
            {
                firstRun = false;
            }

            if(!namePresent)
            {
                arrayOfNames[nameCount] = holder;

                if (firstRun)
                {
                    cout << "OK" << endl;
                }

                else
                {
                    cout << arrayOfNames[nameCount] << endl;
                }
                
            }

            else
            {
                char lastChar = holder.back();
                
                if(isdigit(lastChar))
                {
                    int lastDigit = static_cast<int>(lastChar);
                    lastDigit += 1;
                    string holderSub = holder.substr(0, nameLength);
                    lastChar = static_cast<char>(lastDigit);
                    holderSub.push_back(lastChar);
                    holder = holderSub;
                    
                }

                else
                {
                    holder = holder + "1";
                }
                
            }
            
        }
        


    }
    return 0;
}