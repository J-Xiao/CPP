#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <cstdlib>
#include <ctime> 
#include <math.h>
#include <cctype>
//#include"ece150-proj2-stats.cpp"
//#include"ece150-proj2-helper.cpp"

extern float avg(float item[], int size);
extern float stdDev(float item[], float a, int size);
extern float median(float item[], int size);
extern float aad(float item[], float m, int size);
 
using namespace std; 

int main(int args, char *argv[]){
    
    ifstream infile;
    infile.open("ece150-proj2-input.txt");

    string uri[5000],input[5000];
    int i = 0, firstbit=0, secondbit=0;
    float size[5000], priority[5000], delay[5000];
    float inputsize[5000], inputpri[5000], inputdelay[5000];
    float average=0, stddev=0, med=0, avgabsdev=0;
    int bias=0;
    int range=0, r=0;
    
    srand(time(NULL));
    bias=atoi(argv[1]);
    if(bias<0){
        cerr << "Error";
        return -1;
    }
        
    range=pow(2,bias);
    
    while (infile >> uri[i] >> size[i] >> priority[i]){
        //if (priority[i]>5 || priority[i]<0){
         //   return -1;
       // }

        delay[i]= size[i]/1.25;
      /*  if (infile.eof()){
            infile.close(); 
            break;
        }
        */
        i++;
    }
  
    if(i==0){
        cerr << "Error";
        return -1;
    }
    
    i--;
    int j=0;
    while(cin>>input[j]){
        if(input[j]=="exit"){
            break;
        }
        for(int k=0;k<=i;k++){
            if(input[j]==uri[k]){          // error in input
                if(range==1){
                    r=0;
                }
                else{ do{firstbit=(rand()-RAND_MAX/2)%(range);
                          secondbit=(rand()-RAND_MAX/2)%(range);}
                      while(firstbit==secondbit || delay[k]+firstbit*0.8<=0);
                      r=firstbit;
                }              
                  
                inputsize[j]=size[k];
                inputpri[j]=priority[k];
                inputdelay[j]=delay[k]+r/1.25;
                
                break;
            }
            if(k==i){
                cerr << "Error";
                return -1;
            }
        }
    j++;
    }
    
    average=avg(inputsize, j);
    stddev=stdDev(inputsize, average, j);
    med=median(inputsize, j);
    avgabsdev=aad(inputsize, med, j);
    cout << average << " " << med << " " << stddev << " " << avgabsdev << endl; 
   
    average=avg(inputpri, j);
    stddev=stdDev(inputpri, average, j);
    med=median(inputpri, j);
    avgabsdev=aad(inputpri, med, j);
    cout << average << " " << med << " " << stddev << " " << avgabsdev << endl;     
    
    average=avg(inputdelay, j);
    stddev=stdDev(inputdelay, average, j);
    med=median(inputdelay, j);
    avgabsdev=aad(inputdelay, med, j);
    cout << average << " " << med << " " << stddev << " " << avgabsdev << endl; 
    
}
