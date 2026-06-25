/* program to Print reverse pyramid
********* 
 ******* 
  ***** 
   *** 
    *       */

    #include<iostream>
using namespace std;

int main(){
    int i,j,k;
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(i=1;i<=n;i++) {
  for(j=1;j<=i-1;j++)  {
            cout<<" ";
        }
        for(k=1;k<=2*(n-i)+1 ;k++) {
            cout<<"*";
        }
        cout<<endl; 
    }
    return 0;
}

