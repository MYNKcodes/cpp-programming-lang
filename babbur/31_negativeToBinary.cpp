#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number in negative: ";
    cin>>n;
    int a=n;
    int ans=0,i = 1;
    while (a!=0)
    {
        int bit = a&1;
        ans = bit*i + ans;
        n=n>>1;
        i=i*10;
    }
    //we get binary in the "ans" variable
    //now we have to get 1's Compliment
    ans = ~ans+1;
    cout<< "negative number in decimal is: "<<ans<<endl;
    return 0;
    
}