#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>> n;
    int ans = 0;
    int i = 1;
    while (n!=0)
    {
        int bit = n & 1;        //select the bit of the number
        ans = (bit * i) + ans;  // make the number with respect to that bit
        n = n >> 1; //right shift to make operations on next bit
        i *= 10;    //we are not using pow because of irregularities
    }
    cout<<"binary is: "<<ans<<endl;

}