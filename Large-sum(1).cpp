#include<iostream>
#include<string>
using namespace std; 

int main(int arg, char* args[]){

    int a=0, b=0, c[100], l1, l2, min, max, i=1;
    
    while(args[1][a+1]>0){
         a++;
         l1=a+1;
    }
    a=0;
    while(args[2][a+1]>0){
         a++;
         l2=a+1;
    }
    
    if (l1>l2){
        min=l2;
        max=l1;
    }
    else{
        min=l1;
        max=l2;
    }

    while(i<=min){
        c[max-i]=args[1][l1-i]+args[2][l2-i]-96;//works normally here
        if(c[max-i]>=10){
            c[max-i]=c[max-i]-10;

            if(l1-i-1>=0){
                          
                args[1][l1-i-1]++;
                
            }
            else if(l2-i-1>=0){
                args[2][l2-i-1]++;
            }
            else{
                 b=1;
                 break;
            } 
        
        }
    
    i++;
    }     
    i=1;
    
    while(i<=max-min){
        if(l1>l2){
             c[max-min-i]=args[1][max-min-i]-48;
        
        }
        else{
             c[max-min-i]=args[2][max-min-i]-48;
        }
        if(b=1){
             c[max-min-i]++;
        } 
    i++;
    }      
    for(int x=0;x<=max-1;x++){
            if(x==0){
                while(c[x]==0){
                   x++;
                }
            }
            cout << c[x];   
            
    } 

}

