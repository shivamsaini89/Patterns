/*

*
**
***
****
*****
****
***
**
*

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i =0; i<n; i++){
        for (int j = 0; j<i; j++){
            cout << "*";
        }
        cout << endl;
    }

    for (int i =n; i>0; i--){
        for (int j = 0; j<i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}