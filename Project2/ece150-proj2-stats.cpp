#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

float avg(float item[], int size){
    float sum=0, average=0;
    for(int x=0; x<size; x++){
        sum=sum+item[x];
    }
    average=sum/size;
    return average;
}

float stdDev(float item[], float a, int size){
    float deviation=0;
    for(int x=0; x<size; x++){
        deviation=deviation+(item[x]-a)*(item[x]-a);
       // cout << deviation << ' ' << endl;
    }
    deviation=sqrt(deviation/size);
    return deviation;
}

float median(float item[], int size){
    for(int x=0; x<size; x++){
        for(int y=0; y<size-1; y++){
            if (item[y]>item[y+1]){
                swap(item[y],item[y+1]);        
            } 
        }
    }
    if(size%2!=0){
        return item[size/2];
    }
    else{
        return ((item[size/2-1]+item[size/2])/2);
    }
}

float aad(float item[], float m, int size){
    float AAD=0;
    for(int x=0; x<size; x++){
        AAD=AAD+sqrt((item[x]-m)*(item[x]-m));
    }
    AAD=AAD/size;
    return AAD;
}
/*
int main(){
    float a[10]={6.4,42.4,205.6,205.6,198.4,200}; 
    float b=avg(a, 6);
    float c=median(a, 6);
    cout <<  avg(a, 6) << endl;
    cout << stdDev(a, b, 6) << endl;
    cout << median(a, 6) << endl;
    cout << aad(a, c, 6) << endl;
}


ftp://ftpserver.abc.edu:8080
http://example.com/object1
http://example.another.com/repo/objects/1
http://example.another.com/repo/objects/1
http://example.another.com/repo/objects/1
http://example.another.com/repo/objects/1
exit
*/ 
