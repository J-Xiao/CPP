#include <math.h>
#include<iostream>

using namespace std;

int main()
{
    int a, c;

    cin >> a;
    c=log10(a)/log10(2);
    
    cout << a << " can be represented using " << c+1 << " bits. ";
    
return 0;
    
}
    
