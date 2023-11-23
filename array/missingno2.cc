#include<iostream>
using namespace std;
int main()
{
    int n,arry[1000];
    cout<<"enter the total number of elements: ";
    cin>>n;
    cout<<"the length of array is: "<<n-1<<endl;
    cout<<"enter the elements: \n";
    for(int i=0;i<n-1;i++)
    {
        cin>>arry[i];
    }
    int len = n-1;
    int temp[len];
    for(int i=0;i<=len;i++)
    {
        temp[i]=0;
    }
    for(int k= 0;k<len;k++)
    {
        temp[arry[k]-1]=1;
    }
    int ans;
    for(int i=0;i<= len;i++)
    {
        if(temp[i]==0)
            ans = i+1;
    }
    cout<<"missing number is: "<<ans;
    return 0;    
}