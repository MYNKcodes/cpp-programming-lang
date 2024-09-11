#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>> n;
    bool isPrime = 1;
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        {
            isPrime = 0;
            break;
        }
        
    }
    if (isPrime == 0)
    {
        cout<<"It is not Prime number";
    }
    else
    {
        cout<<"it is PRIME";
    }
    return 0;
    
}