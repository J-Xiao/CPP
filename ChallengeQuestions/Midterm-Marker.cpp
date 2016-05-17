#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char right[20], answer[20];
    int correct=0, incorrect=0;
    ifstream infile;
    
    infile.open("CorrectAnswers.txt");
    
    for(int i=0;i<=19;i++){
        infile >> right[i];
    }
    for(int j=0;j<=19;j++){
        cin >> answer[j];
    }
    
    for(int k=0; k<=19; k++){
        if(right[k]==answer[k]){
            correct++;
        }
        else{
            incorrect++;
        }
    }
    if(correct>=12){
        cout << "Passed" << endl;
    }
    else{
        cout << "Failed" << endl; 
    }
                    
    cout << "Correct Answers:" << correct << endl << "Incorrect Answers:" << incorrect << endl;
   
}
