#include<stdio.h>
#include<iostream>
#include<math.h> 

using namespace std;

int main(){
    
    int A; 
    int B;
    int C;
    int D;
    int E;
    int F; 
    int a;
    int b;
    int c;
    int d; 
    int e;
    int f;
    float s;
    cout << "Please input the numbers of each coins and total amount " << endl;
    cin >> A >> B >> C >> D >> E >> F >> s;
    
    s=s*100;
    
    if ( A>s/200 ) { a=s/200;}
    else { a=A;}
    
    s=s-200*a;
    
    
    if ( B>int(s/100) ) { b=int(s/100);}
    else { b=B;}
    
    s=s-100*b;
    
    
    if ( C>int(s/25) ) { c=int(s/25);}
    else { c=C;}
    
    s=s-25*c;
    
    
    if ( D>int(s/10) ) { d=int(s/10);}
    else { d=D;}
    
    s=s-10*d;
    
    
    if ( E>int(s/5) ) { e=int(s/5);}
    else { e=E ;}
    
    s=s-5*e;
    
    
    if ( F>int(s) ) { f=int(s);}
    else { f=F;}
    
    s=s-f;
    
    if (s==0) {cout << a << " x $2, " << b << " x $1, " << c << " x 25c, " << d << " x 10c, " << e << " x 5c, " << f << " x 1c.";}
    else { cout << "Error: cannot make change.";}
}   
    
    
