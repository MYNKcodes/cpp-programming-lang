#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int m=n;
    int trial = 0;
    if (m == 0)
    {
        cout<< "1";
    }
    while (m!=0)
    {
        trial = (trial>>1) | 1;
        m = m << 1;
    }
    int ans = (~n) & trial;
    cout<<"compliment is: "<<ans<<endl;
    return 0;
    

}