  
/* program to print the following pattern
    A 
   ABA 
  ABCBA 
 ABCDCBA 
ABCDEDCBA */


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
            cout << char(64 + j);
        for(j = (i - 1); j >= 1; j--)
            cout << char(64 + j);
        cout << endl;
    }
    return 0;
}
