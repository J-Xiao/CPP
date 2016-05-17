#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int c25, c10, c5, c1;
    int p, q, r, s, t;
    int min25, min10, min5, min1, min;
    int a;//a is amount of money needed in cents
    cin >> c25 >> c10 >> c5 >> c1 >> a;
    unsigned M[a+1][c25+1][c10+1][c5+1][c1+1];
    
    
        for(q=c25; q>=0; q=q-1){
            for(r=c10; r>=0; r=r-1){
                for(s=c5; s>=0; s=s-1){
                    for(t=c1; t>=0; t=t-1){
                    if (25*q+10*r+5*s+t==a){
                        cout << q << " " << r << " " << s << " " << t;  
                        return 0;                  
                        }                   
                    }
                }
            }
        }
    cerr << "Error: cannot make change.";

    
}
