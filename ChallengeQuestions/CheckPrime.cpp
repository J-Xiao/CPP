#include<iostream>
#include<math.h> 
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b;
    
    c=2;
    
    while (a<=b){
          while (c<a){
                if (a%c==0){
                            break;
                }
          
          c=c+1;
          }
          if (c==a) {
               cout << a << " ";
          }
    c=2;
    a=a+1;
    }

}
    
