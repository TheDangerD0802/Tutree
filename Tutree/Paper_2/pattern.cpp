#include <bits/stdc++.h>
using namespace std;
 
// Prints diamond pattern with 2n rows
void printDiamond(int rows)
{

    
     for (int i=1; i<=rows; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout<<"*";
            }
            for (int k = i*2; k <= rows*2-1; k++)
            {
                cout<<" ";
            }
         
      
        for (int j = 1; j <= i; j++)
            cout << "*";
 
       
 
            cout<<endl;
        }
        
        for (int i=1; i<=rows-1; i++)
        {
            for (int j = rows-1; j >= i; j--)
            {
                cout<<"*";
            }
            for (int k = 1; k <= i*2; k++)
            {
                cout<<" ";
            }
            for (int l = rows-1; l >= i; l--)
            {
                cout<<"*";
            }
            
            cout<<endl;
        }
  
    
}
 
// Driver code
int main()
{
    printDiamond(5);
    return 0;
}
