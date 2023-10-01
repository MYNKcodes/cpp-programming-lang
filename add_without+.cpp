#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: "; 
    cin >> b;
    while (b !=0)
    {
        a++;
        b--;
    }
    
cout << "sum is: "<<a;
return 0;
}