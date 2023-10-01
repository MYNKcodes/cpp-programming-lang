#include <iostream>
using namespace std;

void minmax(int a[], int len, int *min, int *max)
{
    *min = *max = a[0];
    for (int i = 1; i < len; i++)
    {
        if (a[i] < *min)
        {
            *min = a[i];
        }
        if (a[i] > *max)
        {
            *max = a[i];
        }
    }
}

int main()
{
    int a[] = {12, 15, 48, 35, 21, 54, 312, 95, 4531, 45, 12, 21, 25, 454, 421, 21, 2, 5};
    int len = sizeof(a) / sizeof(a[0]);
    int min, max;
    minmax(a, len, &min, &max);
    cout << "the min is " << min << ", the max is:" << max;
    return 0;
}