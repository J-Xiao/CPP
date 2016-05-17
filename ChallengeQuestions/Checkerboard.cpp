#include<iostream>

using namespace std;

int main(){
    int x, y;//height x and width y
    cin >> x >> y;
    int a=1, b=1;
    
    char oddline[100], evenline[100];
    
    while (b<=y){
        a=1;
        if (b%2==1){  
            while(a<=x){
                  if (a%2!=0){
                              cout << "B";
                  }
                  else {
                        cout<< "W";
                  } 
                  a=a+1;               
            }
            if (a=x){cout << endl;}
        }
        else {
              while (a<=x){    
                     if (a%2!=0){
                                 cout << "W";
                     }
                     else {
                           cout<< "B";
                     }  
                     a=a+1;
              }
              if (a=x){cout << endl;}
        }
    b=b+1;
    }
} 
