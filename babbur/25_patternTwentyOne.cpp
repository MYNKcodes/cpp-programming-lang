/*

****
_***
__**
___*

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
        //print space
        int space = i-1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        

        //print star
        int star = n-i+1;
        while (star>0)
        {
            cout<<"*";
            star--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}