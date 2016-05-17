#include <iostream>
#include "ece150-proj3-provided.h"
#include <cstring>
using namespace std;

unsigned timeconversion(request *l){
    return (l -> t).hh*3600 + (l -> t).mm * 60 + (l -> t).ss; //convert arrival time from hh:mm:ss to seconds
}

int getsize(char *name, uri *U){
    while(U != 0){
        if(strcmp(name, U -> name) == 0){
            return U -> size;
        }
    U = U -> next;
    }
}

int getpriority(char *name, uri *U){
    while(U != 0){
        if(strcmp(name, U -> name) == 0){
            return U -> priority;
        }
    U = U -> next;
    }
}

int deletefrom(request *&U, request *del){
    if(U == del){
        U = U -> next;
        return 0;
    }
    while(U != 0){
        if(U == del){
           request *tmp = U -> next;
           delete U ;
           U = tmp;
           break;
        }
    U = U -> next;
    }
}

int findrequestnumbers(request *U){
    int i = 0;
    while(U != 0){
        i++;
        U = U -> next;
    }
    return i;
}



timestamp maxClientDelay(uri *URI, request *REQ){
    timestamp returnvalue;
    float delay[10000];
    float time = 0;
    int pri = -1;
    float siz = 0;
    float maxdelay = 0;
    
    uri *initialURI = URI;
    //request *REQ1 = REQ;
    request *initialREQ = REQ;
    request *mark = initialREQ; //create a pointer to store the request with the biggest priority
    //a pointer that stores the previous location
    int i = findrequestnumbers(initialREQ);
    
    while(REQ != 0){
        cout << REQ << " ";
        REQ = REQ -> next;
    }
    cout << endl;
    REQ = initialREQ; 
    //time = (REQ -> t).hh*3600 + (REQ -> t).mm * 60 + (REQ -> t).ss;
    time = timeconversion(REQ);    
    for(int j = 0; j < i; j++){
        while(REQ !=0 && timeconversion(REQ) <= time){
            //cout << getpriority(REQ -> name, initialURI) << endl;
            if (getpriority(REQ -> name, initialURI) > pri){
                pri = getpriority(REQ -> name, initialURI);
                siz = getsize(REQ -> name, initialURI);
                mark = REQ;
            }
          //for(uri* urii = initialURI; urii !=0; urii = urii -> next){// for loop can cause problems here as the -> may be executed earlier than expected
        REQ = REQ -> next;
        }
        pri = -1;
        //cout << mark << " " ;
        //cout << mark -> t.hh << " " << mark -> t.mm << " " << mark -> t.ss << endl;
        delay[j] = time - timeconversion(mark);
        //cout << siz << endl;
        time = time + siz*0.8;
        //cout << time << endl;
        deletefrom(initialREQ, mark);
        REQ = initialREQ;
        cout << initialREQ << " ";
    }
    
    for(int k=0; k < i; k++){
        if (delay[k] > maxdelay){
            //cout << delay[k] << endl; 
            maxdelay =  delay[k];
        }
    }
    if(maxdelay - int(maxdelay) >= 0.5){
        maxdelay = int(maxdelay) + 1;
    }
    else{
        maxdelay = int(maxdelay);
    }
    int x = maxdelay;
    //cout << x << endl;
    returnvalue.hh = x / 3600;
    //cout << returnvalue.hh << endl;
    returnvalue.mm = (x - returnvalue.hh * 3600) / 60;
    //cout << returnvalue.mm << endl;
    returnvalue.ss = x - returnvalue.hh * 3600 - returnvalue.mm * 60;
    //cout << returnvalue.ss << endl;
    return returnvalue;
/*
    while(REQ != 0){
        cout << getsize(REQ -> name, initialURI) << endl;
        REQ = REQ -> next;
    }
*/
}

/*
int main(){
    request a;
    uri c;
    request *x = new request;
    uri *y = new uri;
    
    x = &a;
    y = &c;
    maxClientDelay( y, x);
}
*/
