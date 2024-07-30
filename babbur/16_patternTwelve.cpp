/*

        ABCD
        EFGH
        IJKL
        MNOP

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows: ";
    cin>> n;
    int i=1;
    char count='A';
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    return 0;
}    