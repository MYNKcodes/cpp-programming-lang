#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x,val1,val2,count=0;
    cout << "enter number: ", x;
    cin >> x;
    val1=ceil(sqrt(x));
    val2=x;
    for (int i = 2; i <= val1; i++)
    {
        if (val2%i==0)
        {
            count=1;
        }
        
    }
    if ((count==0 && val2!=1) || val2==2 ||  val2==3)
    {
        cout << val2 << " is a prime number";
    }
    else
    {
        cout << val2 << " is a prime number";
    }
    return 0;
}