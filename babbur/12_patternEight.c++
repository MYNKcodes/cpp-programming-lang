#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the nu. opf rows: ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int value = i;
        int j=1;
        while (j<=i)
        {
            cout<<value;
            value++;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}