#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    ifstream infile;
    ofstream outfile;
    
    infile.open("file_input.txt");
    
    int num[5], avg[10], minimum[10], maximum[10], counter=0,j=0;
    int max1, max2, max3, min1, min2, min3;
    while(!infile.eof()){

        infile >> num[0];
        for(int i=1;i<=4;i++){
            infile >> num[i];
            if (i==4){
                avg[j]=(num[0]+num[1]+num[2]+num[3]+num[4])/5;
                max1=max(num[0],num[1]);
                max2=max(num[2],num[3]);
                max3=max(num[4],max1);
                maximum[j]=max(max3,max2);
                
                min1=min(num[0],num[1]);
                min2=min(num[2],num[3]);
                min3=min(num[4],min1);
                minimum[j]=min(min3,min2);
                j++;
            }
        }       
    }
    
    outfile.open("file_input.txt");
    
    for (int x=0;x<=j-1;x++){    
        outfile << "Max:" << maximum[x] << " Min:" << minimum[x] << " Average:" << avg[x] << endl;  
    }
    outfile << j <<" lines in file." << endl;
    return 0;
}        
