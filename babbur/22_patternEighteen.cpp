/*
ABC
BCD
CDE
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
        char ch = 'A'+i-1;
        int j=1;
        while (j<=n)
        {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}