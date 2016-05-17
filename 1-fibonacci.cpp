#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    if(n == 0) {
	cout << "0" << endl;
	return 0;
    }

    if(n == 1) {
	cout << "1" << endl;
	return 0;
    }

    int k;
    k = 1;

    int Fkminus1, Fk;

    Fkminus1 = 0;
    Fk = 1;

    while(k < n) {
	k = k+1;

	int oldFk, oldFkminus1;
	oldFk = Fk;
	oldFkminus1 = Fkminus1;

	Fk = oldFk + oldFkminus1;
	Fkminus1 = oldFk;
    }

    cout << "Fibonacci(" << n << ") = " << Fk << endl;
    return 0;
}
