/*

*********
 *******
  *****
   ***
    *

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j<n-i-1; j++)
        {
            cout << " ";
        }
        for (int k=0; k<2*i+1; k++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}