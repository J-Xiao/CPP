#include<iostream>
#include<string>
#include<string.h> 
#include<cstdlib>
using namespace std;

int main(int arg, char *args[]){
    
	string temp;
	int p=0, q=0, i=0, j=0, k=0, min, min1, l1, l2, l3, l4;
	
    p=atoi(args[1]);
    
    string firstname[p+1], lastname[p+1];
    
    for(int r = 0; r < p; r++){	
		cin >> firstname[r] >> lastname [r];
    }
    
    while(q<=p){
        i=0;
        while(i<p-1){
            if(lastname[i]>lastname[i+1]){
                temp=lastname[i];
                lastname[i]=lastname[i+1];
                lastname[i+1]=temp;
                                
                temp=firstname[i]; 
                firstname[i]=firstname[i+1];
                firstname[i+1]=temp;

                
            }
                       
            else if((lastname[i]==lastname[i+1])&&(firstname[i]>firstname[i+1])){
                
                temp=firstname[i]; 
                firstname[i]=firstname[i+1];
                firstname[i+1]=temp;
                
            }
        i++;
        }
    q++;
    }
    
    for(int x=0;x<=p-1;x++){
        cout << firstname[x] << " " << lastname[x] << endl;
    }
}
