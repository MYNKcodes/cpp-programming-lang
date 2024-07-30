#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of rows: ";
    cin>>n;
    int row = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=row)
        {
            cout<<col<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
