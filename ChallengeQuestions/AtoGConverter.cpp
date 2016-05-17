#include<iostream>

using namespace std;

int main(){
    char input1, input2;
    cin >> input1 >> input2;
    
    switch(input1){
      case 'A':
           switch(input2){
               case '+':
                    cout << "95";
                    break;
               case 'o':
                    cout << "87";
                    break;
               case '-':
                    cout << "82";
                    break;
           }
      break;
      case 'B':
           switch(input2){
               case '+':
                    cout << "78";
                    break;
               case 'o':
                    cout << "75";
                    break;
               case '-':
                    cout << "72";
                    break;
      break;
           }
      case 'C':
           switch(input2){
               case '+':
                    cout << "68";
                    break;
               case 'o':
                    cout << "65";
                    break;
               case '-':
                    cout << "62";
                    break;  
      break;   
           }
      case 'D':
           switch(input2){
               case '+':
                    cout << "58";
                    break;
               case 'o':
                    cout << "55";
                    break;
               case '-':
                    cout << "52";
                    break;
      break;
           }
      default:
           cout << "38";
           break;
           
   }
}
