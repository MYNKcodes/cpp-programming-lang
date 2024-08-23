/*
A
BC
CDE
DEFG
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows: ";
    cin>> n;
    int i = 1;

// method 1

    // while (i<=n)
    // {
    //     char ch = 'A'+i-1;
    //     int j=1;
    //     while (j<=i)
    //     {
    //         cout<<ch;
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
        
    // }




    // method 2


    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            char cha = 'A'+i+j-2;
            cout<<cha;
            j++;

        }
        cout<<endl;
        i++;
        
    }
    
    return 0;
}