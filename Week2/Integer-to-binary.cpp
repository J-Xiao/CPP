#include<stdio.h>
#include<iostream>


using namespace std;
int main(){
    
    int n;
    int a[100000];
    int b=1;

    cout << "Please input an integer" << endl;
    
    cin >> n;
    
    while ( n>0 ){
          
          a[b]=n%2; 
          
          if (n%2==0) {n=n/2;}
          
          else {n=(n-1)/2;}
          
          b=b+1;
          }
    
    while (b>1){
    b=b-1;
    cout << a[b];
    
}

}        
