#include<stdio.h>
#include<iostream>
#include<math.h> 

using namespace std;

int main(){
    
    int A, B, C, D, E, F, a, b, c, d, e ,f;
    float s;
    cout << "Please input the numbers of each coins and total amount " << endl;
    cin >> A >> B >> C >> D >> E >> F >> s;
    
    if ( A>int(s/2) ) { a=int(s/2);}
    else { a=A;}
    
    s=s-2*a;
    cout << s << endl;
    
    if ( B>int(s) ) { b=int(s);}
    else { b=B;}
    
    s=s-b;
    cout << s << endl;
    
    if ( C>int(4*s) ) { c=int(4*s);}
    else { c=C;}
    
    s=s-0.25*c;
    cout << s << endl;
    
    if ( D>int(10*s) ) { d=int(10*s);}
    else { d=D;}
    
    s=s-0.1*d;
    cout << s << endl;
    
    if ( E>int(20*s) ) { e=int(20*s);}
    else { e=E ;}
    
    s=s-0.05*e;
    cout << s << endl;
    
    if ( F>int(100*s) ) { f=int(ceil(100*s));}
    else { f=F;}
    
    s=s-0.01*f;
    
    if (s<0.001) {cout << a << "x $2, " << b << "x $1, " << c << "x 25c, " << d << "x 10c, " << e << "x 5c, " << f << "x 1c, ";}
    else { cout << "Error: cannot make change.";}
}   
    
    
