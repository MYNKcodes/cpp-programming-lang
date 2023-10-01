#include<iostream>
using namespace std;
int main()
{
    int base,exponent,expo,power=1;
    double pwr=1.0;
    cout << "enter base: ";
    cin >> base;
    cout << "enter exponent: ";
    cin >> exponent;
    expo=exponent;
    if (exponent>0)
    {
        while (exponent!=0)
        {
            power=power*base;
            exponent--;
        }
        
        cout << base << " to the power " << expo << " is " << power; 
    }
    else
    {
        while (exponent<0)
        {
            pwr=pwr*(1.0/base);
            exponent++;
        }
        cout << base << " to the power "<< expo << " is " <<pwr;
        
    }
    
    return 0;
}