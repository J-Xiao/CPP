#include<iostream>
#include<string>
#include<cstdlib> 
using namespace std; 

int main(int arg, char* args[]){
    
    if(arg<3){
        cerr << "Error";
        return -1;
    }
    
    int a=0, b=0, c[100], l1=0, l2=0, big, small, i=0, x=0, y=0, p=0;

    while(a<=100){
        c[a]=0;
        a++;
    }
    
    a=0;
    while(args[1][a+1]>0){
         a++;
         l1=a;
    }
    
    a=0;
    while(args[2][a+1]>0){
         a++;
         l2=a;
    }


         
    for(int d=0; d<=l1;d++){
        if(args[1][d]<48 || args[1][d] >57){
             cerr << "Error";
             return 0;
        }
    }
    
    for(int e=0; e<=l2;e++){
        if(args[2][e]<48 || args[2][e] >57){
             cerr << "Error";
             return 0;
        }
    }
    

    for(int f=0;f<=l1;f++){
        if(args[1][f]!=48){
            break;
        }
        f++;
        if(f==l1+1){
            cerr << "Error";
            return -1;
        }
    }
    
    for(int g=0;g<=l2;g++){
        if(args[2][g]!=48){
            break;
        }
        g++;
        if(g==l2+1){
            cerr << "Error";
            return -1;
        }
    }
                
    big=max(l1,l2);
    small=min(l1,l2);
    
    while(i<=big){
        if(l1-i>=0){
            x=args[1][l1-i]-48;
        } 
        else{x=0;}
        
        if(l2-i>=0){
            y=args[2][l2-i]-48;
        }
        else{y=0;}
        
        if(x+y>=10){
            p=x+y-10;        
            if(l1-i-1>=0){
                 args[1][l1-i-1]++;
            }
            else if(l2-i-1>=0){
                args[2][l2-i-1]++;
            }
            else{
                 cout << 1;
                 int m=0;
                 c[big-i]=c[big-i]+p;    
                 while(m<=big){            
                     cout << c[m];
                     m++;
                         
                 }
                 return 0;
            }
        }
        else{p=x+y;}
               
            c[big-i]=c[big-i]+p;
        
        i++;
        
    }
    
    int r=0;
    if(c[0]==0){
        while(c[r]==0){
        r++;
        }
    }    
    while(r<=big){            
        cout << c[r];
        r++;
                         
    }    
}
