#include<iostream>
using namespace std;
int main(){
    int n,count = 1;
    cout<<"enter the no. of rows: ";
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}