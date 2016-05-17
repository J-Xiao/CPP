#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int a, b;
	
    string number; 
	cin >> number;
    	
	int l=number.length();
	

    while (number.length()%3 !=0){
          number='0'+number;}
    
 
    l=number.length();
    
    a=0;
    b=number[0];     
    
    while (a<=l-4){
    		
    b=b^number[a+3];
    
    a=a+3;	    
    }
    
    if (b==1 || b==0){
        b=b;
    }
    else {
         b=b-48;
    }
    
    cout << b;
    
    a=1;
    b=number[1];
    
    while (a<=l-4){
    	
    b=b^number[a+3];
    
    a=a+3;    	
    }

    if (b==1 || b==0){
        b=b;
    }
    else {b=b-48;}
    
    cout << b;
    
    a=2;
    b=number[2];
    
    while (a<=l-4){
    	
    b=b^number[a+3];
	
	a=a+3;	
    }
    
    if (b==1 || b==0){
        b=b;
    }
    else {
        b=b-48;
    }
    
    cout << b;
	}
	
