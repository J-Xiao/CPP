#include<stdio.h>
#include<iostream>


using namespace std;
int main(){
    
    int n;
    int a[100000];
    int b=1;
    int c=0;

    cout << "Please input an integer" << endl;
    
    cin >> n;
    
    while ( n>0 ){
          
          a[b]=n%2; 
          
          if (n%2==0) {n=n/2;}
          
          else {n=(n-1)/2;}
          
          c=c+a[b];
          
          b=b+1;
          
          
          }
    
    if (c%2==0) {cout << "The # of 1s is even.";}
    else {cout << "The # of 1s is odd.";}
    

    

}        
