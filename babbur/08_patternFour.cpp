#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"enter the no. of rows: ";
 cin>>n;
 int i=1,count = 1;
 while (i<=n)
 {
    int j=1;
    while (j<=n)
    {
        cout<<count;
        count = count+1;
        j++;
    }
    cout<<endl;
    i=i+1;
    
 }
   
}