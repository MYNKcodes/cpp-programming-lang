#include<iostream>
using namespace std;
int main(){
    int sum = 0,n, i=1;
    cout<< "enter the number: ";
    cin>> n;
    while (i<=n)
    {
        cout<<i<<" "; 
        sum = sum+i;
        i = i+1;
    }

    cout<<"\nThe sum is: "<< sum;
    return 0;
}