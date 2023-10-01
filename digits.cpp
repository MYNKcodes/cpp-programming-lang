#include<iostream>
using namespace std;
int main()
{
    int a,count=0;
    cout << "enter number: ";
    cin >> a;
    while (a!=0)
    {
        a=a/10;
        count++;
    }
    cout << " number of the digit is " << count;
    return 0;

}