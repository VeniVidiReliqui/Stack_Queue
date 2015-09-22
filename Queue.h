#ifndef QUEUE_H
#define QUEUE_H
/*
 * Queue.h
 * Name: Benjamin Hunt
 *
 * Nov 20, 2013
 *
 * This class implements queue using a linked-list.
 */
#include <List.h>
#include <string>
using namespace std;

template<class T> class Queue{
public:

	// REQUIRED public class methods


	Queue(){}

	Queue(const Queue& other){
	  List<T> l(other);
	}

	~Queue(){}
	
	// Getters

	// Returns the size of the queue; # elements.
	int size(){
	  return l.size();
	}

	// Returns the value at the front of the queue.  Throws length_error exception on error (length 0)
	T front(){
	  return l.getFirst();
	}

	// Returns the value in the end of the queue.  Throws length_error exception on error (length 0)
	T back(){
	  return l.getLast();
	}
	
	// Setters

	
	// Puts value at the end of the queue.
	void push(T value){
	  l.pushEnd(value);
	  return;
	}

	// Removes the value at the front of the queue but does not return it.
	//  Throws length_error exception on error (length 0)
	void pop(){
	  l.popFront();
	  return;
	}


  // Prints the stack to the screen like:
  // [1, 2, 3, 4, ... 2]  Starts with [ ends with ] and has ,
  // between each element, but not after the last.
  // The front of the stack is on the left.
	void print(){
	  l.printList();
	}




private:
	// You may use any private variables or methods you'd like
	List<T> l;
};

#endif
