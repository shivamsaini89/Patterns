/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i%2  == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0) )
            {
                cout << 1 << " ";
            }
            else
                cout << 0 << " ";
        }

        cout << endl;
    }

    return 0;
}