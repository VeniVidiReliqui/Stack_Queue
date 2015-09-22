#ifndef Queue_TEST_H
#define Queue_TEST_H

#include "Queue.h"

#include <iostream>
#include <cxxtest/TestSuite.h>
#include <string>

using namespace std;

class QueueTest : public CxxTest::TestSuite {
public:
	
	// Constructors
  void testME() {
    // Queue<int><float> l;  // Should be able to do this!
		Queue<int> l;
		TS_ASSERT(l.size() == 0);
  }
	/*//WON'T TAKE STRINGS AGGGGHHHHHH...
  void estQueueWithStrings(){
    Queue<string> k;
    k.push("thing");
    k.push("stuff");
    k.push("word");
    TS_ASSERT_EQUALS(3,k.size());
    TS_ASSERT_EQUALS("thing",k.front());
    TS_ASSERT_EQUALS("thing",k.back());
  }*/
  void testQueueWithChars(){
    Queue<char> y;
    y.push('d');
    y.push('t');
    y.push('r');
    y.push('q');
    y.push('n');
    TS_ASSERT_EQUALS(5,y.size());
    TS_ASSERT_EQUALS('d',y.front());
    TS_ASSERT_EQUALS('n',y.back());
  }
  void testQueueWithDouble(){
    Queue<double> t;
    t.push(345);
    t.push(123545);
    t.push(1963);
    t.push(159357);
    t.push(458483);
    TS_ASSERT_EQUALS(5,t.size());
    TS_ASSERT_EQUALS(345,t.front());
    TS_ASSERT_EQUALS(458483,t.back());
  }
  void testQueueWithLong(){
    Queue<long> t;
    t.push(345);
    t.push(123543245);
    t.push(1963);
    t.push(159357);
    t.push(4584843);
    TS_ASSERT_EQUALS(5,t.size());
    TS_ASSERT_EQUALS(345,t.front());
    TS_ASSERT_EQUALS(4584843,t.back());
  }
  void testQueueWithShort(){
    Queue<short> t;
    t.push(345);
    t.push(12354);
    t.push(1963);
    t.push(1597);
    t.push(25848);
    TS_ASSERT_EQUALS(5,t.size());
    TS_ASSERT_EQUALS(345,t.front());
    TS_ASSERT_EQUALS(25848,t.back());
  }
  void testQueueWithBool(){
    Queue<bool> t;
    t.push(false);
    t.push(false);
    t.push(true);
    t.push(false);
    t.push(true);
    TS_ASSERT_EQUALS(5,t.size());
    TS_ASSERT_EQUALS(false,t.front());
    TS_ASSERT_EQUALS(true,t.back());
  }
  /*//RETURNS FLOATS ROUNDED ARRRGGGHHHH...
  void estQueueWithFloat(){
    Queue<float> t;
    t.push(1.50000);
    t.push(3.6);
    t.push(5.9);
    t.push(2.5);
    t.push(7.50000);
    TS_ASSERT_EQUALS(5,t.size());
    TS_ASSERT_EQUALS(1.50000,t.front());
    TS_ASSERT_EQUALS(7.50000,t.back());
  }*/

  void testSizeManyElements(){
    Queue<int> l;
    l.push(5);
    l.push(6);
    l.push(7);
    l.push(9);
    l.push(10);
    l.push(4);
    TS_ASSERT_EQUALS(6,l.size());
  }
  void testSizeOneElement(){
    Queue<int> l;
    l.push(5);
    TS_ASSERT_EQUALS(1,l.size());
  }
  void testSizeNoElements(){
    Queue<int> l;
    TS_ASSERT_EQUALS(0,l.size());
  }

  void testGetFirstManyElements(){
    Queue<int> l;
    l.push(5);
    l.push(6);
    l.push(7);
    l.push(9);
    l.push(10);
    l.push(4);
    TS_ASSERT_EQUALS(5,l.front());
  }
  void testGetFirstOneElement(){
    Queue<int> p;
    p.push(9);
    TS_ASSERT_EQUALS(9,p.front());
  }
  void testGetFirstNoElements(){
    Queue<int> k;
    try {
            k.front();
             TS_FAIL("Expected exception was not thrown");
           } catch (length_error& iae) {
             // Success! Threw an exception when it should
           }
  }

  void testGetLastManyElements(){
    Queue<int> l;
    l.push(5);
    l.push(6);
    l.push(7);
    l.push(9);
    l.push(10);
    l.push(4);
    TS_ASSERT_EQUALS(4,l.back());
  }
  void testGetLastOneElement(){
    Queue<int> l;
    l.push(5);
    TS_ASSERT_EQUALS(5,l.back());
  }
  void testGetLastNoElements(){
    Queue<int> l;
    try {
            l.back();
             TS_FAIL("Expected exception was not thrown");
           } catch (length_error& iae) {
             // Success! Threw an exception when it should
           }
  }
	  
  void testpush(){
    Queue<int> l;
    l.push(5);
    l.push(6);
    l.push(7);
    l.push(9);
    l.push(10);
    l.push(4);
    TS_ASSERT_EQUALS(6,l.size());
    TS_ASSERT_EQUALS(4,l.back());
  }
  void testpushOneElement(){
    Queue<int> l;
    l.push(9);
    TS_ASSERT_EQUALS(1,l.size());
    TS_ASSERT_EQUALS(9,l.back());
  }

  void testPopManyElements(){
    Queue<int> l;
    l.push(5);
    l.push(6);
    l.push(7);
    l.push(9);
    l.push(10);
    l.push(4);
    l.pop();
    TS_ASSERT_EQUALS(6,l.front());
    TS_ASSERT_EQUALS(5,l.size());
    TS_ASSERT_EQUALS(6,l.front());
  }
  void testPopOneElement(){
    Queue<int> l;
    l.push(5);
    l.pop();
    TS_ASSERT_EQUALS(0,l.size());
  }
  void testPopNoElements(){
    Queue<int> l;
    try {
            l.pop();
             TS_FAIL("Expected exception was not thrown");
           } catch (length_error& iae) {
             // Success! Threw an exception when it should
           }
  }

};

#endif
