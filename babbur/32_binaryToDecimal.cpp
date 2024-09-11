#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter binary number: ";
    cin>>n;
    int i = 1;
    int ans=0;
    while(n!=0){
        int digit = n%10;
        if(digit == 1)
        {
        ans = digit*i + ans;
        }
        n = n/10;
        i = i*2;
    }
    cout<<"number in decimal is: "<<ans<<endl;
return 0;
}
