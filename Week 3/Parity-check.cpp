#include<iostream>
#include<stdio.h>

using namespace std;

int main(){ 
    
    int n, c, a, b ;
    cin >> n;
    
  
    
    c=0 ;// ������
    while (n >0)
    {
        if((n &1) ==1) // ��ǰλ��1
            c=c+1 ; // ��������1
        n >>=1 ; // ��λ
    }
    
     if (c%2==0 && n>= 128) {cout << "Invalid";}
     else if (c%2==1 && n<128) {cout << "Invalid";}
     else {cout << "Valid";}
     
     
} 
    
