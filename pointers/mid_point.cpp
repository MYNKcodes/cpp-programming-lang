#include <iostream>
using namespace std;
int *mid(int arry[], int length)
{
    return &arry[length / 2];
}

int main()
{
    int a[] = {23, 65, 15, 23, 54, 6, 32};
    int len = sizeof(a) / sizeof(a[0]);
    int find = *mid(a, len);
    cout << find;
    return 0;
}
