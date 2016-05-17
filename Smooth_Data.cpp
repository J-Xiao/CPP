#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream infile;
    ofstream outfile;
    
    infile.open("input_array-SA07_03.txt");
    outfile.open("input_array_output_SA07_03.txt");
    
    int row, column;
    
    infile >> row >> column;//ÐÐ ÁÐ
    
    if(row<3 && column<3){
       cerr << "Error";
       return -1;
    }
    
    int original[row][column];
    float output[row][column]; 
    
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            infile >> original[i][j];
        }
    }
    
    for(int x=1;x<row-1;x++){
        for(int y=1;y<column-1;y++){
            output[x][y]=(original[x-1][y-1]+original[x-1][y]+original[x-1][y+1]+original[x][y-1]+original[x][y+1]+original[x+1][y-1]+original[x+1][y]+original[x+1][y+1])/8;
            output[x][y]=(original[x][y]+output[x][y])/2;
        }
    }
    
    for(int m=1;m<row-1;m++){
        for(int n=1;n<column-1;n++){
            cout << output[m][n] << " ";
            if(n==column-1){
               cout << endl;
            }
        }
    }
}
