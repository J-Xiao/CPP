#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int c25, c10, c5, c1;
    int p, q, r, s, t;
    int min25, min10, min5, min1, min;
    int a;//a is amount of money needed in cents
    cin >> c25 >> c10 >> c5 >> c1 >> a;
    unsigned M[a+1][c25+1][c10+1][c5+1][c1+1];
    
    for(p=0;p<=a; p++){
        for(q=0; q<=c25; q++){
            for(r=0; r<=c10; r++){
                for(s=0; s<=c5; s++){
                    for(t=0; t<=c1; t++){
                        if(p==0){M[p][q][r][s][t]=0;
                        }
                        else{
                            if(q>0 && p>=25){
                                   min25=M[p-25][q-1][r][s][t];
                            }                            
                            else{min25=a;}
                            
                            if(r>0 && p>=10){
                                   min10=M[p-10][q][r-1][s][t];
                            }                                 
                            else{min10=a;}
                            
                            if(s>0 && p>=5){
                                   min5=M[p-5][q][r][s-1][t]; 
                            }
                            else{min5=a;}
                            
                            if(t>0 && p>=1){
                                   min1=M[p-1][q][r][s][t-1];
                            }
                            else{min1=a;} 
                            
                            if(min25>=min10){min=min10;}
                            else{min=min25;}
                            if(min>=min5){min=min5;}
                            if(min>=min1){min=min1;}
                            M[p][q][r][s][t]=1+min;                         
                                                         
                        }                    
                    }
                }
            }
        }
    }

    cout << min25 << " " << min10 << " " << min5 << " " << min1 << endl;
}

