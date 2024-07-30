#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character" << endl;
    cin>> ch;
    if (ch>=97 && ch <=122)
    {
        cout<< "It is in lowercase";
    }
    else if (ch>=65 && ch<=90)
    {
        cout<< "it is in uppercase";
    }
    else if (ch>=48 && ch<=57)
    {
        cout<< "It id numerical";
    }
    
    else
    {
        cout<< "it is a symbol";
    }
    
    
    
}