#include <stdio.h>
#include <iostream>

using namespace std;

int main();
{
    char a, b;

    printf("Please input a lower-case alphabet: ");

    cin >> a ;
    b=a;
    a=a-32;

    cout<<"The upper-case of "<< b <<" is "<< a << ".";
}
