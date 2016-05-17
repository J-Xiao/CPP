#include <iostream>

using namespace std;

int main() {
    unsigned x = 5;

    cout << "x = " << x << endl;
    cout << "Address of x = " << &x << endl;

    unsigned *y; // y is declared to contain an address

    y = &x; // y contains the address of x

    cout << "y = " << y << endl;
    cout << "y, dereferenced = " << *y << endl;
    cout << "Address of y = " << &y << endl;

    // Given that y is allocated right after x...
    cout << "&y-1 = " << hex << &y-1 << endl;
    //cout << "*(&y-1) = " << (unsigned)*(&y-1) << endl;

    return 0;
}
