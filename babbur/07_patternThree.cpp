#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows: ";
    cin>> n;
    int i=1;

    // forward


    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<< j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }

    cout<<"==================================================";

    //reverse

    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         cout<< n-j+1;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
        
    // }
    
}