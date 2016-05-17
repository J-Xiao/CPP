#include<iostream>
#include<cstdlib>
#include<cstring> 
using namespace std;
    
int largestOfThree(float a, int b, char c)
{

    if(a>=b && a>=c){
        return 0;
    }
    else if(b>=a && b>=c){
        return 1;
    }
    else if(c>=a && c>=b){
        return 2;
    }

}

int isString(char *s, int maxSize)
{
    int x=0;
    while(s[x]>0){
        x++;
    }
    if (x<=maxSize){
        return x;
    }
    else{
        return -1;
    }
}

void interleave(int a[], int alen, int b[], int blen, int result[], int maxresultlen){
     int x=0, numa=0,numb=0;
     

     while(x<maxresultlen){
                
         if(numa<alen && x<maxresultlen){
             result[x]=a[numa];
             numa++;
             x++;
         }
         if(numb<blen && x<maxresultlen){
             result[x]=b[numb];
             numb++;
             x++;
         }
         if(x==alen+blen && x<maxresultlen){
         break;
         }  
         
     }
}

