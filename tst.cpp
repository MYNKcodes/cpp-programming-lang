#include <iostream>
using namespace std;
int main(){
    int x;
    int z;
    int c;
    cin >> z;
    cin >> x;
    cin >> c;
    if (c > x || c > z)
    {
        cout << "PASS";
    }
    else
    {
        cout << "FAIL";
    }
    
    cin >> x;
    cin >> z;
    cin >> c;
    if (c > x || c > z)
    {
        cout << "PASS";
    }
    else
    cout << "FAIL";
    return 0;
}