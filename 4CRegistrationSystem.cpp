#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map <string, int> theHashMap = {{"a1", 2}, {"s2", 5}};

    string str;

    cin >> str;

    cout << theHashMap.find(str);





    return 0;
}