//reverse a number

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int sum = 0;
    while (n!=0)
    {
        int digit = n%10;
        sum = sum*10 + digit;
        n=n/10;
    }
    if ((sum < INT32_MIN/10) || (sum > INT32_MAX/10))
    {
        cout<<"Not in range!";
    }
    else{
    cout<<"reversed number: "<< sum << endl;
    }
    return 0;

}