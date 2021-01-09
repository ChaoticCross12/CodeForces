#include <iostream>

using namespace std;


int main()
{
    long int n, m, a, b, numOfMs, leftForA, finalCostBoth, finalCostOneB;
    cin >> n >> m >> a >> b;

    if (n >= m)
    {
        numOfMs = n / m;
        leftForA = n % m;



        finalCostBoth = (numOfMs * b) + (leftForA * a);
        finalCostOneB =  (numOfMs * b) + (leftForA * b);
        

        if (finalCostOneB < finalCostBoth)
        {
            cout << finalCostOneB << endl;
        }
        else
        {
            cout << finalCostBoth << endl;
        }
    }
    
    else
    {
        if (b <= a * n)
        {
            cout << b << endl;
        }
        else
        {
            cout << n * a << endl;
        }
    }
    
    

    return 0;
}