#include<iostream>
using namespace std;
int main()
{
    int arry[5]={1,32,3,4,5};
    int start=0,end=4;
    while(start<end)
    {
        swap(arry[start],arry[end]);
        start++;
        end--;
    };
    for(int i = 0;i<5;i++)
    {
        cout<< arry[i]<<" ";
    }
    return 0;
}