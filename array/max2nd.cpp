#include<iostream>
using namespace std;
int main()
{
    int ans = -1;
    int arr[]={1,2,3,5,45,9};
    for(int i=0;i<7;i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
        }
    }
    // printf("largest value is: %d",ans);

    //for second largest


    int secondlar = -1;
    for(int i=0;i<7;i++)
    {
        if (ans!=arr[i])
        {
            secondlar=max(ans,arr[i]);
        }
        
    }
    printf("second largest is %d",secondlar);
    return 0;
    }