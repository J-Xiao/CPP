#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){
    ifstream infile;
    fstream outfile;
    infile.open("array.txt");
    outfile.open("matrix.txt");
    
    int n = 0, i = 0;
    int x = 0, y = 0;//x and y are coordinates
    float nodes = 0;
    
    infile >> n;
    int matrix[n][n];
    float node[n][n];
    float edge[n];
    char alphabet;
    int gridlocX[n], gridlocY[n];
    
    for(int a = 0; a <= n-1; a++){
        for(int b = 0; b <= n-1; b++){
            matrix[a][b] = 0;
            node[n][n] = 0;
        }
    }
    
    while(infile >> alphabet >> x >> y >> nodes){
        if(alphabet == 'a'){
            matrix[x][y] = -1;
            matrix[y][x] = -1;
            node[x][y] = nodes;
            node[y][x] = nodes;
            edge[i] = nodes;
            gridlocX[i] = x;
            gridlocY[i] = y;
            i++;
        }
        else if(alphabet == 'c'){
            matrix[x][y] = 0;
            matrix[y][x] = 0;
            
            for(int k = 0; k <= i; k++){
                if(gridlocX[k] == x && gridlocY[k] == y){
                    edge[k] = 0;
                }
            }
        }
        else{
             cerr << "Error";
             return -1;
        }
    }
    
    for(int c = 0; c <= n-1; c++){
        for(int d = 0; d <= n-1; d++){
            if(matrix[c][d] == 0){
                outfile << 0 << " ";
            }
            else if(matrix[c][d] == -1){
                outfile << node[c][d] << " ";
                /*
                if(c <= d){
                    edge[i] = node[c][d];
                    gridlocX[i] = c;
                    gridlocY[i] = d;
                    i++;
                }
                */
            }
        }
        outfile << endl;
    }
    
    float min = 0;
    for(int e = 0; e < i; e++){
        for(int f = 0; f < i-1; f++){
            if(edge[f] > edge[f+1]){
                swap(edge[f], edge[f+1]);
                swap(gridlocX[f],gridlocX[f+1]);
                swap(gridlocY[f],gridlocY[f+1]);
            }
        }
    }
    
    for(int g = 0; g < i; g++){
        if(edge[g] != 0){
            outfile << "(" << gridlocX[g] << "," << gridlocY[g] << ")" <<edge[g] << endl;
        }
    }
    
    infile.close();
    outfile.close();
}
