// 1 <= array[] <= N

// for finding missing number,
//step 1: find sum of elements of the array.
//step 2: find sum of all "n" numbers.
//step 3: difference of step 2 and step 1


#include<iostream>
using namespace std;
int main()
{
int n; //all numbers
int sum = 0;
int arry[1000];
cout<<"enter the total number of elements: "<<endl;
cin>>n;
cout<<"So, the length of array is: "<<n-1<<endl; 
cout<<"enter the elements in the array: \n";
//entering elements
for(int j=0;j<n-1;j++)
{
    cin >> arry[j];
}

// step 1
for(int i = 0;i<n-1;i++)
{
    sum += arry[i];
}

// step 2
int ans = n*(n+1)/2;

//step 3
cout<<"missing element is "<<ans-sum;
return 0;
}