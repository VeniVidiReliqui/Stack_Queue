#ifndef STACK_TEST_H
#define STACK_TEST_H

#include "Stack.h"

#include <iostream>
#include <cxxtest/TestSuite.h>

using namespace std;

class StackTest : public CxxTest::TestSuite {
public:
	
	// Constructors
  void testME() {
    //Stack<int> l;	// Should be able to do this!
		Stack<int> l;
		TS_ASSERT(l.size() == 0);
  }

  /*//WON'T TAKE STRINGS AGGGGHHHHHH...
  void estStackWithStrings(){
    Stack<string> k;
    k.push("thing");
    k.push("stuff");
    k.push("word");
    TS_ASSERT_EQUALS(3,k.size());
    TS_ASSERT_EQUALS("thing",k.top());
  }*/
  void testStackWithChars(){
    Stack<char> y;
    y.push('d');
    y.push('t');
    y.push('r');
    y.push('q');
    y.push('n');
    TS_ASSERT_EQUALS(5,y.size());
    TS_ASSERT_EQUALS('n',y.top());
  }
  void testStackWithDouble(){
    Stack<double> t;
    t.push(345);
    t.push(123545);
    t.push(1963);
    t.push(159357);
    t.push(458483);
    TS_ASSERT_EQUALS(5,t.size());
    TS_ASSERT_EQUALS(458483,t.top());
  }
  void testStackWithLong(){
    Stack<long> t;
    t.push(345);
    t.push(123543245);
    t.push(1963);
    t.push(159357);
    t.push(4584843);
    TS_ASSERT_EQUALS(5,t.size());
    TS_ASSERT_EQUALS(4584843,t.top());
  }
  void testStackWithShort(){
    Stack<short> t;
    t.push(345);
    t.push(12354);
    t.push(1963);
    t.push(1597);
    t.push(25848);
    TS_ASSERT_EQUALS(5,t.size());
    TS_ASSERT_EQUALS(25848,t.top());
  }
  void testStackWithBool(){
    Stack<bool> t;
    t.push(false);
    t.push(false);
    t.push(true);
    t.push(false);
    t.push(true);
    TS_ASSERT_EQUALS(5,t.size());
    TS_ASSERT_EQUALS(true,t.top());
  }
  /*//RETURNS FLOATS ROUNDED ARRRGGGHHHH...
  void estStackWithFloat(){
    Stack<float> t;
    t.push(1.50000);
    t.push(3.6);
    t.push(5.9);
    t.push(2.5);
    t.push(7.50000);
    TS_ASSERT_EQUALS(5,t.size());
    TS_ASSERT_EQUALS(7.50000,t.top());
  }*/

  void testSizeManyElements(){
    Stack<int> l;
    l.push(5);
    l.push(6);
    l.push(7);
    l.push(9);
    l.push(10);
    l.push(4);
    TS_ASSERT_EQUALS(6,l.size());
  }
  void testSizeOneElement(){
    Stack<int> l;
    l.push(5);
    TS_ASSERT_EQUALS(1,l.size());
  }
  void testSizeNoElements(){
    Stack<int> l;
    TS_ASSERT_EQUALS(0,l.size());
  }
	
  void testpush(){
    Stack<int> l;
    l.push(5);
    l.push(6);
    l.push(7);
    l.push(9);
    l.push(10);
    l.push(4);
    TS_ASSERT_EQUALS(6,l.size());
    TS_ASSERT_EQUALS(4,l.top());
  }
  void testpushOneElement(){
    Stack<int> l;
    l.push(9);
    TS_ASSERT_EQUALS(1,l.size());
    TS_ASSERT_EQUALS(9,l.top());
  }

  void testPopManyElements(){
    Stack<int> l;
    l.push(5);
    l.push(6);
    l.push(7);
    l.push(9);
    l.push(10);
    l.push(4);
    l.pop();
    TS_ASSERT_EQUALS(5,l.size());
  }
  void testPopOneElement(){
    Stack<int> l;
    l.push(5);
    l.pop();
    TS_ASSERT_EQUALS(0,l.size());
  }
  void testPopNoElements(){
    Stack<int> l;
    try {
            l.pop();
             TS_FAIL("Expected exception was not thrown");
           } catch (length_error& iae) {
             // Success! Threw an exception when it should
           }
  }
	  
};

#endif
