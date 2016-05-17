#include <cstddef>
#include <iostream>

#include "ece150-sa10.h"

using namespace std;

Node *head = NULL;
Node *tail = NULL;

int size(){
    int count = 1;
    Node *pointer = head;
    while(pointer -> next != NULL){
        count ++;
        pointer = pointer -> next;
    }
    return count;
}

int front(){
    return head -> weight;
}

int back(){
	return tail -> weight;
}

void pushFront(int x){
    Node *newhead = new Node;
    newhead -> weight = x;
    newhead -> next = head;
    newhead -> prev = NULL;
    head -> prev = newhead;
    head = newhead;
	return;
}

void pushBack(int x){
    Node *newtail = new Node;
    newtail -> weight = x;
    newtail -> next = NULL;
    newtail -> prev = tail;
    tail = newtail;
	return;
}

void popFront(){
    Node *tmp = head -> next;
    delete head;
    head = tmp;    
	return;
}

void popBack(){
    Node *tmp = tail -> prev;
    delete tail;
    tail = tmp;
	return;
}

int count(int x){
    Node *pointer = head;
    int count = 0;
    while(head -> next != NULL){
        if (head -> weight == x){
            count++;
        }
    }
    if (tail -> weight == x){
        count++;
    }
	return count;
}

void sort(){
    Node *pointer = head;
    int sizes = size();
    for(int i = 0; i < size; i++){
        while( pointer -> next != 0){
            if( pointer -> weight > pointer -> next -> weight){
                int tmp = pointer -> weight;
                pointer -> weight = pointer -> next -> weight;
                pointer -> next -> weight = tmp;
            }
            pointer = pointer -> next;
        }
    }
	return;
}
