#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

int main(){
    
    int i, j, a, b, c;
    
    string v;
    v[0]=1;
    i=0;
    a=1;
    while (a!=0){
          i=i+1;
          cin >> a;
          v[i]=a;
          cout << v[i];

}  
    
    j=2;
    a=1;
    b=1;
    while (j<i){
          if (v[j]>=v[j-1]){a=1;}
          else {a=0;}
          b=b*a;
          j=j+1;}
          
          if (b==1) {std::cout << "Sorted non-decreasing.";}
          
    j=2;
    a=1;
    c=1;
    while (j<i){
          if (v[j]<=v[j-1]){
          a=1;}
          else{a=0;}
          c=c*a;
          j=j+1;}
          
          if (c==1) {std::cout << "Sorted non-increasing.";}
          
    if (b==0 && c==0){std::cout << "Not sorted.";}
}         
          
          
       

