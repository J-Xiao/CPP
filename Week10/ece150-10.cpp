#include <iostream>
#include "ece150-10-provided.h"
#include <algorithm>
using namespace std;

void restoreSorted(intListEntry * &l){
    
    if(l != 0){
        intListEntry *head = new intListEntry;
        head = l;
        int count=0;
        while(l->next != 0){
            count++;
            l = l->next;
        }
      
        l = head;
    
        for(int j = 0; j <= count; j++){
         
            while(l->next != 0){
            
                if(l->i > l->next->i){
                    int tmp = l->i;
                    l->i = (*(l -> next)).i;
                    (*(l -> next)).i = tmp;
                }
                l = l->next;    
            }
            l = head;
        }
    }
    
}         

mixedFraction::mixedFraction(int w, int n, int d){
    whole = w;
    fraction.numerator = n;
    fraction.denominator = d;

}

void mixedFraction::simplify(){
    if(whole < 0 && fraction.numerator > 0){
        fraction.numerator = - fraction.numerator;
    }
    
    fraction.numerator = fraction.numerator + whole * int(fraction.denominator);
    whole = 0;
    if(fraction.numerator > 0){
        while(fraction.numerator >= fraction.denominator){
            fraction.numerator = fraction.numerator - fraction.denominator;
            whole++;
        }
    }
     
    else if(fraction.numerator < 0){
        while(-fraction.numerator >= fraction.denominator){
            whole--;
            fraction.numerator = fraction.denominator + fraction.numerator;
        }
        if(whole < 0 && fraction.numerator < 0){
             fraction.numerator = - fraction.numerator;
        }
    }
    if(fraction.numerator > 1 && fraction.denominator > 1){
        int k=2;
        while(k<=fraction.numerator){
            if(fraction.numerator % k == 0 && fraction.denominator % k == 0){
                fraction.numerator = fraction.numerator / k;
                fraction.denominator = fraction.denominator / k;
                k--;
            }
            k++;
        }
    }
    
}

void mixedFraction::add(mixedFraction f){
    f.simplify();
    simplify();
    if(whole < 0 && fraction.numerator > 0){
        fraction.numerator = - fraction.numerator;
    }
    if(f.whole < 0 && f.fraction.numerator > 0){
        f.fraction.numerator = - f.fraction.numerator;
    }

    fraction.numerator =  fraction.numerator * int(f.fraction.denominator) + f.fraction.numerator * int(fraction.denominator);
    fraction.denominator = int(fraction.denominator) * int(f.fraction.denominator);
    whole = whole + f.whole;
    
    
    if(whole < -1 && fraction.numerator > 0){
        whole++;
        fraction.numerator = fraction.denominator - fraction.numerator;
    }

    if(whole == -1 && fraction.numerator > 0){
        whole++;
        fraction.numerator = fraction.numerator - fraction.denominator;
    }
    
    
    if(whole > 0 && fraction.numerator < 0){
        whole--;
        fraction.numerator = fraction.numerator + fraction.denominator;
    
    }
    simplify();
}


void mixedFraction::print(){
    if(fraction.numerator == 0 || fraction.denominator == 1){
        cout << whole;
    }
    
    else if(whole == 0){
        cout << fraction.numerator << "/" << fraction.denominator; 
    }
    else{
        cout << whole << " " << fraction.numerator << "/" << fraction.denominator;
    }
}
/*
int main(){
  intListEntry a;
    intListEntry b;
    intListEntry c;
    intListEntry d;
    intListEntry e;
    intListEntry f;
    
    a.i=-12;
    b.i=-12;
    c.i=0;
    d.i=12;
    e.i=122;
    f.i=-1;
    
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&e;
    e.next=&f;
    f.next=NULL;
    intListEntry* x=new intListEntry;
    x=&a;
    restoreSorted(x);
    do{
        cout << x->i << ' ';
        x=x->next;
    }
    while(x!=NULL);
*/
int main(){
mixedFraction g(-1,1,2);
mixedFraction f(-158,423,376);  

//mixedFraction g(3,5,6);
//mixedFraction f(-9000,3,4);
f.add(g);
f.simplify();
f.print();

}
