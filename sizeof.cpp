#include<iostream>
using namespace std;
int main()
{
   int numb[7] = {12,65,51,87,1,6,78};
   cout << sizeof(numb)/4; 
   /*The result show 28 instead of 7, when the array contains 7 elements.
   It is because the sizeof() operator returns the size of a type in bytes
int type is usually 4 bytes, so from the example above, 4 x 7 (4 bytes x 7 elements) = 28 bytes*/
}