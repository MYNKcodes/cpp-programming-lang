#include<iostream>
using namespace std;

int add(int b[], int size)
{
    int sum = 0,i;
    for(i=0;i<size;i++)
    {
        sum += b[i];
    }
    return sum;
}

int main()
{
    int arr[]={2,4,6,8,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    int added=add(arr,len);
    cout<< "thre sum is ";
    cout<<added;
    return 0;
}