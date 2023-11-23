#include<iostream>
using namespace std;
int main()
{
    int n, arry[1000];
    cout<<"enter the number: ";
    cin>> n;
    arry[0]=0;
    arry[1]=1;

    for(int i = 2;i<n;i++)
    {
        arry[i]=arry[i-1]+arry[i-2];
    }
    cout<<"in fibonacci series, the element is: "<<arry[n-1];
return 0;
}
