#ifndef STACK_H
#define STACK_H
/*
 * Stack.h
 * Name: Benjamin Hunt
 *
 * Nov 20, 2013
 *
 * This class implements a stack datastructure using a linked-list.
 */

#include<List.h>
using namespace std;

template<class T> class Stack{
public:

	// REQUIRED public class methods

	Stack(){}

	Stack(const Stack& other){
	  List<T> m(other);
	  l = m;
	}
	~Stack() {};	// Destructor


	// Getters


	// Returns the size of the stack; # elements.
	int size(){
	  return l.size();
	}

	
	// Returns the value on the top of the stack.
	// Throws length_error exception on error (length 0)
	T top(){
	  return l.getLast();
	}

	// Setters

	// Puts the value on the top of the stack.
	void push(T value){
	  l.pushEnd(value);
	  return;
	}

	// Removes the top value from the stack, but does not return it.
	// Throws length_error exception on error (length 0)
	void pop(){
	  l.popEnd();
	  return;
	}



	// Prints the stack to the screen like:
	// [1, 2, 3, 4, ... 2]  Starts with [ ends with ] and has ,
	// between each element, but not after the last.
	// The front of the stack is on the left.
	void print(){
	  l.printList();
	  return;
	}


private:
	// You may use any private variables or methods you'd like
	List<T> l;
};

#endif
