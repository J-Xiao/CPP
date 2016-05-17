#include<iostream>
#include<string.h>


using namespace std;
int main(){
    
    int min, max;
    int input1, input2;
    int a;
    
    cin >> min >> max;
    if (min!=0 && max!=0){
    cout << min << " " << max << endl;}
    
    if (max<min) {a=min;
                  min=max;
                  max=a;}              
                  
    input1=1;
    input2=1; 
    while (input1!=0 || input2!=0){
          
          if (min==0)
          break;
                    
          cin >> input1;
          if (input1==0)
          break;
          cin >> input2;
          if (input2==0){
          cout << input1 << " " << max << endl;
          cout << input1 << " " << min << endl;
          break;
          }
          
          
          cout << input1 << " " << input2 << endl;
          
          if (input1>input2) {cout << input1 << " " << max << endl;
                              cout << input2 << " " << min << endl;
                     if (input1>max){max=input1;}    
                     if (input2<min){min=input2;}    
          }
          
          else  {cout << input1 << " " << min << endl;
                 cout << input2 << " " << max << endl;
                 
                 if (input1<min){min=input1;}
                 if (input2>max){max=input2;}
                                  
                 }
                 
          }    
    
    } 
