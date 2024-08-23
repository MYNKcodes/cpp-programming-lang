/*
****
***
**
*
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
        //print star
        int star=1;
        while (star<=n-i+1)
        {
            cout<<"*";
            star++;
        }
        cout<<endl;
        i++;
    }
    
}