/*
1234554321
1234**4321
123****321
12******21
1********1
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows: ";
    cin>> n;
    int row = 1;
    while (row<=n)
    {
        //print first triangle
        int first =1;
        while (first<= n-row+1)
        {
            cout<<first;
            first++;
        }
        //print stars

        int star= 2*row-2;
        while (star)
        {
            cout<<"*";
            star--;
        }

        //third area(triangle)
        int third = n-row+1;
        while (third)
        {
            cout<<third;
            third--;
        }
        cout<<endl;
        row++;
        
         
    }
    return 0;
}