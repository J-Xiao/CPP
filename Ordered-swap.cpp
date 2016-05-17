#include<iostream>

using namespace std;

void OrderedSwap(int &a, int &b, int &c)
{
    int temp = 0;
    for (int i=0;i<=2;i++)
    {
        if(a>b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if(b>c)
        {
            temp = b;
            b = c;
            c = temp;
        }
    }
       
}

int main(){
}
/*
    int m,n,p;
    
    cin >> m >> n >> p;
    orderedSwap(m,n,p);
    cout << m << " " << n << p;
}
*/
