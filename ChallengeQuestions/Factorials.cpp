#include<iostream>

using namespace std;

int main(){
    
    int x, factorial;
    cin >> x;
    if (x==0){
        cout << 1;
        return 0;
    }
    else if(x<0){
         return 0;
    }
    
    factorial=1;
    
    while(x>1){
               factorial=factorial*x;
               x=x-1;
    } 
    
    cout << factorial;
}
