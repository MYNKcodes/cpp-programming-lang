/*
___1___
__121__
_12321_
1234321
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows: ";
    cin>> n;
    int row = 1;
    while (row<=n)
    {
        //print space(first triangle)

        int space = n-row;
        while (space)
        {
            cout<<" ";
            space--;
        }

        //print mid triangle(2nd one)

        int j=1;
        while (j<=row)
        {
            cout<<j;
            j++;
        }
        

        //print third triangle(remaining)
        int start =row-1;
        while (start)
        {
            cout<<start;
            start--;
        }
        
        cout<<endl;
        row++;
    
    }
   return 0; 
}