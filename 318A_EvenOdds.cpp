#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int n, k;

    cin >> n >> k;

    vector<int> numberList;

    for (int i = 1; i <= n; i += 2)
    {
        numberList.push_back(i);
    }

    for (int i = 2; i <= n; i += 2)
    {
        numberList.push_back(i);
    }


    cout <<  numberList.at(k - 1);


    return 0;
}
