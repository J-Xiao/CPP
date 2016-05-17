#include<stdio.h>
#include<iostream>

using namespace std;

int main() {
    
    char a;
    cin >> a;
    
    if (a<=31 && a>=0) {cout << "control ";}
    
    else if (a>=32 && a<=126) {cout << "printable ";}
    
    else {cout << "non-printable delete ";}
    
    if (a>=48 && a<=57) {cout << "number ";}

    else if (a>=65 && a<=90) {cout << "upper-case letter ";}
    
    else if (a>=97 && a<=122) {cout << "lower-case letter ";}
    
    if (a==40 || a==41 || a==42 || a==43 || a==45 || a==47 || a==58 || a==60 || a==61 || a==62 || a==94 ||a==91 || a==93) {cout << "math ";}
    
    if (a==33 || a==34 || a==39 || a==40 || a==41 || a==42 || a==44 || a==45 || a==46 || a==58 || a==49 || a==63 || a==91 || a==93 || a==96 || a==123 || a==125) {cout <<"punctuation ";}
}
