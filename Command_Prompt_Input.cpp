#include<iostream>

using namespace std;

int main(int argc, char *args[])
    int p=0;
    float avg=0.0,variance=0.0;
    
    p=argc-1;
    
    for(int i=1;i<=p;i++){
        avg=avg+args[i];
    }    
    avg=avg/p;
    
    for(int j=1;j<=p;j++){
        variance=variance+(args[j]-avg)(args[j]-avg);
    }
    variance=variance/p;
    
    
    

