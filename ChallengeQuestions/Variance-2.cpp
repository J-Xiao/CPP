#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    long x, y;  
    long avg;
    long var;

    cin >> x;
    cin >> y;

    avg=(x+y)/2;
    
    var=(x-avg)*(x-avg)+(y-avg)*(y-avg);

    cout << "Variance of " << x << " and " << y << " is " << var;

    return 0;
}
