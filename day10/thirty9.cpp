/*program to Print number pyramid
    1 
   121 
  12321 
 1234321 
123454321 */


#include <iostream> 
using namespace std;

int main() 
{ 
    int i, j, space, rows; 
    cout << "Enter number of rows: "; 
    cin >> rows; 
    for(i = 1; i <= rows; i++) 
    { 
        for(space = 1; space <= (rows - i); space++) 
            cout << " "; 
        for(j = 1; j <= i; j++) 
            cout << j; 
        for(j = (i - 1); j >= 1; j--) 
            cout << j; 
        cout << endl; 
    } 
    return 0; 
}
