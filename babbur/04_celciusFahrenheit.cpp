#include<iostream>
using namespace std;
int main(){
    int cel;
    float far,calc;
    cout<<"Enter temperature in celcius: ";
    cin>> cel;
    calc = cel*1.8;
    far = calc+32;
    cout<< cel <<"in fahrenheit is "<<far;
    return 0;
}