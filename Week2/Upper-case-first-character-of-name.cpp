#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    
    char a[20], b[20], c[20];
    cin >> a >> b >> c;
    
    if (a[0]>91) {a[0]=a[0]-32;}
    if (b[0]>91) {b[0]=b[0]-32;}
    if (c[0]>91) {c[0]=c[0]-32;}
    
    cout << a << b << c ;
    
}
