#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int ans = 0;
    while (n!=0)
    {
        int digit = n%10;
        ans = ans*10 + digit;
        n = n/10;
    }
    if ((ans>INT32_MAX/10) || (ans<INT32_MIN/10))       //if the integer is out of the range i,e [-2^-31 , 2^31+1]
        {
            cout<<"out of integer range i,e 0 "<<endl;
        }
    else{    
    cout<<"reverse is: "<<ans<<endl;
    }
    return 0;
    
}