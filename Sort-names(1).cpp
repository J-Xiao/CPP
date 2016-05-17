#include<iostream>
#include<string>
#include<string.h> 
#include<cstdlib>
using namespace std;

int main(int arg, char *args[]){
    
	string temp;
	int p=0, q=0, i=0, j=0, k=0, min, min1, l1, l2, l3, l4;
	
	
    p=atoi(args[1]);
    cout << p; 
    string firstname[p+1], lastname[p+1];
    for(int r = 0; r < p; r++){	
		cin >> firstname[r] >> lastname [r];
		cout << r;
		//cout << firstname[r] << lastname [r];
    }
    //cout << r;	
	while(q<=p-1){	
	    while(i<p-1){
                
            l1=lastname[i].length();                             
            l2=lastname[i+1].length();        
            if(l1>l2){min=l2;}
            else{min=l1;}     

		    while(j<=min-1){
                //bubble sort
			    if (lastname[i][j]>lastname[i+1][j]){
				    temp=lastname[i];
				    lastname[i]=lastname[i+1];
    				lastname[i+1]=temp;
	 			
		     		temp=firstname[i];
			     	firstname[i]=firstname[i+1];
			        firstname[i]=temp;
			    	break;
		        }
                else if(lastname[i][j]<lastname[i+1][j]){
                     break;
                }
            
                else{ 
                    if(j==min-1){
                    if (l1>l2){
                        temp=lastname[i];
				        lastname[i]=lastname[i+1];
    			     	lastname[i+1]=temp;
	 			
		     	    	temp=firstname[i];
			        	firstname[i]=firstname[i];
			            firstname[i]=temp;
			    	    break;           
                    } 
                    
                    else if(l1<l2){
                         break;
                    }
                    
                    else{
                         l3=firstname[i].length();
                         l4=firstname[i+1].length();
                         if(l3>l4){
                             min1=l4;                                   
                         }
                    
                         else{min1=l3;}
                         
                         while(k<min1){
                             if (lastname[i][k]>lastname[i+1][k]){
                             temp=lastname[i];
              			     lastname[i]=lastname[i+1];
    		         		 lastname[i+1]=temp;
	 			
		             	 	 temp=firstname[i]; 
			     	         firstname[i]=firstname[i+1];
			                 firstname[i]=temp;
			    	         break;
		                     }
                             
                             else if(lastname[i][k]<lastname[i+1][k]){
                                  break;
                             }
                          
                          k=k++;           
                         }
                    }     
                }               
            }     
        j++;	
		}	    
	i++;	
	}
	p++;
    }
	
}
	 

