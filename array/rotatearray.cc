#include <iostream>
using namespace std;
int main()
{
    int arry[] = {2, 4, 6, 2, 51, 6, 84, 8};
    int n;
    int len = sizeof(arry) / sizeof(arry[0]);
    cout << "your array is: \n";
    for (int i = 0; i < len; i++)
    {
        cout << arry[i] << " ";
    }
    int last = arry[len - 1];
    for (int i = len - 2; i >= 0; i--)
    {
        arry[i + 1] = arry[i];
    }
    arry[0] = last;
    cout << endl;
    cout << "rotated array is: \n";
    for (int i = 0; i < len; i++)
    {
        cout << arry[i] << " ";
    }

    return 0;
}