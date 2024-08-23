/*
---*
--**
-***
****
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows: ";
    cin>> n;
    int i = 1;
    while (i<=n)
    {
        int space = n-i;
        int star = 1;
        while (space)
        {
            cout<<" ";
            space--;

        }
        while (star<=i)
        {
            cout<<"*";
            star++;
        }
        
        cout<<endl;
        i++;
        
    }
  return 0;  
}