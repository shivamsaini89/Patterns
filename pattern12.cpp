/*

1         1
1 2     2 1
1 2 3 3 2 1

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int space = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }
        for (int l = i; l > 0; l--)
        {
            cout << l;
        }

        space -= 2;
        cout << endl;
    }

    return 0;
}