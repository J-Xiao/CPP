#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

int main(){
    ifstream infile;
    ofstream outfile;
    
    infile.open("ece150-proj1-input.txt");
    outfile.open("ece150-proj1-output.txt");
    
    string uri;
    int size, priority, i=0, test=0;//i is a counter and 'test' is used to check whether priority is bigger than 5
    float AvgSize, PriorityDelay, TotalDelay;
    
    AvgSize=0, PriorityDelay=0;
    
    while (infile >> uri >> size >> priority){
           if (priority>5){
               test=1;
           }
           AvgSize=AvgSize+size;
           PriorityDelay=PriorityDelay+priority;
           i++; 
    }
    cout << test;

    
    AvgSize=AvgSize/i;
    PriorityDelay=PriorityDelay/i;
    TotalDelay=AvgSize/1.25+PriorityDelay;//10 Megabits per sec=1.25 Mega Bytes per sec
    if (test==0){            
        outfile << "Average size = " << AvgSize << endl;
        outfile << "Expected delay for priority = " << PriorityDelay << endl;
        outfile << "Expected total delay = " << TotalDelay << endl;
    }
    
    if (infile.eof()) {
        infile.close();
        outfile.close();
    }    

                       
                          

} 
    
    
