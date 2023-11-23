//find first and last element in the sorted array


#include<iostream>
using namespace std;
int main()
{
    int start,end,first,last,mid,n=6;
    start=0,end=n-1,first=-1,end=-1;
    //here n is the number of elements in the array
    int arry[]={5,7,7,8,8,10};
    //target is for finding 8
    int target = 8;

    //for finding first occurance
    while (start<=end)
    {
        mid = start + (end-start)/2;
        if(arry[mid]==target)
        {
       first=mid;
       end = mid-1;
        }
        else if (arry[mid]<target)
        {
            start = mid+1;
        }
        else
        {
            end=mid-1;
        }
        
        
    }
cout<<"the first occurance is at position: "<<start<<endl;     
    //for finding the LAST occurance

    start = 0,end=n-1;
    
    while (start<=end)
    {
        mid = start + (end-start)/2;
        if(arry[mid]==target)
        {
       last=mid;
       start = mid+1;
        }
        else if (arry[mid]<target)
        {
            start = mid+1;
        }
        else
        {
            end=mid-1;
        }
        
        
    }
cout<<"the last occurance is at position: "<<last;

return 0;
}