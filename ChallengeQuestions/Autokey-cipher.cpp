#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char key[3];
    char output;
    string msg;
    int l=0, i=0;
    
    ifstream infile;
    infile.open("Encrypt-message.txt");
    
    cin >> key;
    while(infile >> msg){
        l=msg.length();
        for(int j=0;j<l;j++){
            if(i%3==0){
                output=msg[j]+key[0]-'A';
                if(output>90){
                    output=output-26;
                }
                cout << output;
            }
            else if(i%3==1){
                output=msg[j]+key[1]-'A'; 
                if(output>90){
                    output=output-26;
                }
                cout << output;
            }
            else{
                output=msg[j]+key[2]-'A';
                if(output>90){
                    output=output-26;
                }
                cout << output;
            }
            i++;
        }
        cout << " ";
    }
return 0;
}
