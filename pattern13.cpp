/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int count = 0;
    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            count+=1;
            cout << count << " ";
        }
        cout << endl;
    }

    return 0;
}