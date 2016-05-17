#include <iostream>
#include <cstring>
#include "ece150-proj3-provided.h"

/**
 * Two test invocations to maxClientDelay().
 * Compile this .cpp file with your ece150-proj3.cpp:
 * g++ test-main.cpp ece150-proj3.cpp -o myExecutable
 */

using namespace std;

void printTimestamp(timestamp t) {
    if(t.hh < 10) cout << "0";
    cout << t.hh << ":";
    if(t.mm < 10) cout << "0";
    cout << t.mm << ":";
    if(t.ss < 10) cout << "0";
    cout << t.ss;
}

int main() {
    uri *u = 0;
    request *r = 0;

    /* Test 1 */
    // Generate URIs
    for(int i = 0; i < 5; i++) {
	uri *newuri = new uri;
	newuri->name = new char[strlen("http://a.com") + 1];
	strcpy(newuri->name, "http://a.com");
	(newuri->name)[7] = 'a' + i;
	newuri->size = (i+1)*5;
	newuri->priority = i;
	newuri->next = u;
	u = newuri;
    }

    // Generate Requests
    // Pick the 3rd URI to request in every request
    uri *requri = u->next->next;

    timestamp somet;
    somet.hh = 8; somet.mm = 18; somet.ss = 43; // Some request time

    for(int i = 0; i < 10; i++) {
	request *newreq = new request;
	newreq->name = requri->name; // WARNING: sharing memory
	newreq->t = somet;
	newreq->next = r;
	r = newreq;
    }

    timestamp result = maxClientDelay(u, r);
    cout << "Test 1: " << endl;
    cout << "    my maxClientDelay: "; printTimestamp(result);
    cout << endl << "    Correct answer: " << "00:01:48" << endl;

    /* Test 2 */
    // Same URIs, but different set of requests
    for(request *i = r; i; ) {
	request *toDeallocate = i;
	i = i->next;
	delete toDeallocate;
	    // Do *not* deallocate name member.
    }

    r = 0;

    // Allocate new set of requests
    // Request each URI once, in order, 2 seconds apart
    uri *j = u;
    for(int i = 0; i < 5; i++) {
	request *newrequest = new request;
	newrequest->name = j->name;
	j = j->next;
	newrequest->t = somet;
	somet.ss -= 2;
	newrequest->next = r;
	r = newrequest;
    }

    result = maxClientDelay(u, r);
    cout << "Test 2: " << endl;
    cout << "    my maxClientDelay: "; printTimestamp(result);
    cout << endl << "    Correct answer: " << "00:00:50" << endl;
    return 0;
}
