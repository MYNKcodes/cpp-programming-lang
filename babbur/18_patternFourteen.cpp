/*
A
BB
CCC
DDDD
*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows: ";
    cin>> n;
    int i = 1;
    char ch = 'A';


    //method 1



    // while (i<=n)
    // {
    //     int j=1;
    //     while (j<=i)
    //     {
    //         cout<<ch;
    //         j++;
    //     }
    //     cout<<endl;
    //     ch++;
    //     i++;
        
    // }


    //method 2

    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            char ch = 'A'+i-1;
            cout<< ch;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
    return 0;
}    