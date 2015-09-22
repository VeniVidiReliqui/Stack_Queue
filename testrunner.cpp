/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ListTest_init = false;
#include "ListTest.h"

static ListTest suite_ListTest;

static CxxTest::List Tests_ListTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ListTest( "ListTest.h", 11, "ListTest", suite_ListTest, Tests_ListTest );

static class TestDescription_suite_ListTest_testME : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testME() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 15, "testME" ) {}
 void runTest() { suite_ListTest.testME(); }
} testDescription_suite_ListTest_testME;

static class TestDescription_suite_ListTest_testSizeManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testSizeManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 20, "testSizeManyElements" ) {}
 void runTest() { suite_ListTest.testSizeManyElements(); }
} testDescription_suite_ListTest_testSizeManyElements;

static class TestDescription_suite_ListTest_testSizeOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testSizeOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 30, "testSizeOneElement" ) {}
 void runTest() { suite_ListTest.testSizeOneElement(); }
} testDescription_suite_ListTest_testSizeOneElement;

static class TestDescription_suite_ListTest_testSizeNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testSizeNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 35, "testSizeNoElements" ) {}
 void runTest() { suite_ListTest.testSizeNoElements(); }
} testDescription_suite_ListTest_testSizeNoElements;

static class TestDescription_suite_ListTest_testGetFirstManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testGetFirstManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 40, "testGetFirstManyElements" ) {}
 void runTest() { suite_ListTest.testGetFirstManyElements(); }
} testDescription_suite_ListTest_testGetFirstManyElements;

static class TestDescription_suite_ListTest_testGetFirstOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testGetFirstOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 50, "testGetFirstOneElement" ) {}
 void runTest() { suite_ListTest.testGetFirstOneElement(); }
} testDescription_suite_ListTest_testGetFirstOneElement;

static class TestDescription_suite_ListTest_testGetFirstNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testGetFirstNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 55, "testGetFirstNoElements" ) {}
 void runTest() { suite_ListTest.testGetFirstNoElements(); }
} testDescription_suite_ListTest_testGetFirstNoElements;

static class TestDescription_suite_ListTest_testGetLastManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testGetLastManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 65, "testGetLastManyElements" ) {}
 void runTest() { suite_ListTest.testGetLastManyElements(); }
} testDescription_suite_ListTest_testGetLastManyElements;

static class TestDescription_suite_ListTest_testGetLastOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testGetLastOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 75, "testGetLastOneElement" ) {}
 void runTest() { suite_ListTest.testGetLastOneElement(); }
} testDescription_suite_ListTest_testGetLastOneElement;

static class TestDescription_suite_ListTest_testGetLastNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testGetLastNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 80, "testGetLastNoElements" ) {}
 void runTest() { suite_ListTest.testGetLastNoElements(); }
} testDescription_suite_ListTest_testGetLastNoElements;

static class TestDescription_suite_ListTest_testAtManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testAtManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 90, "testAtManyElements" ) {}
 void runTest() { suite_ListTest.testAtManyElements(); }
} testDescription_suite_ListTest_testAtManyElements;

static class TestDescription_suite_ListTest_testAtOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testAtOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 109, "testAtOneElement" ) {}
 void runTest() { suite_ListTest.testAtOneElement(); }
} testDescription_suite_ListTest_testAtOneElement;

static class TestDescription_suite_ListTest_testAtNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testAtNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 121, "testAtNoElements" ) {}
 void runTest() { suite_ListTest.testAtNoElements(); }
} testDescription_suite_ListTest_testAtNoElements;

static class TestDescription_suite_ListTest_testContainsManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testContainsManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 137, "testContainsManyElements" ) {}
 void runTest() { suite_ListTest.testContainsManyElements(); }
} testDescription_suite_ListTest_testContainsManyElements;

static class TestDescription_suite_ListTest_testContainsOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testContainsOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 151, "testContainsOneElement" ) {}
 void runTest() { suite_ListTest.testContainsOneElement(); }
} testDescription_suite_ListTest_testContainsOneElement;

static class TestDescription_suite_ListTest_testContainsNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testContainsNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 157, "testContainsNoElements" ) {}
 void runTest() { suite_ListTest.testContainsNoElements(); }
} testDescription_suite_ListTest_testContainsNoElements;

static class TestDescription_suite_ListTest_testEqualsTrue : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testEqualsTrue() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 161, "testEqualsTrue" ) {}
 void runTest() { suite_ListTest.testEqualsTrue(); }
} testDescription_suite_ListTest_testEqualsTrue;

static class TestDescription_suite_ListTest_testEqualsFalse : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testEqualsFalse() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 180, "testEqualsFalse" ) {}
 void runTest() { suite_ListTest.testEqualsFalse(); }
} testDescription_suite_ListTest_testEqualsFalse;

static class TestDescription_suite_ListTest_testContainsAllManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testContainsAllManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 217, "testContainsAllManyElements" ) {}
 void runTest() { suite_ListTest.testContainsAllManyElements(); }
} testDescription_suite_ListTest_testContainsAllManyElements;

static class TestDescription_suite_ListTest_testContainsAllOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testContainsAllOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 246, "testContainsAllOneElement" ) {}
 void runTest() { suite_ListTest.testContainsAllOneElement(); }
} testDescription_suite_ListTest_testContainsAllOneElement;

static class TestDescription_suite_ListTest_testContainsAllNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testContainsAllNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 255, "testContainsAllNoElements" ) {}
 void runTest() { suite_ListTest.testContainsAllNoElements(); }
} testDescription_suite_ListTest_testContainsAllNoElements;

static class TestDescription_suite_ListTest_testPushFrontManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPushFrontManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 264, "testPushFrontManyElements" ) {}
 void runTest() { suite_ListTest.testPushFrontManyElements(); }
} testDescription_suite_ListTest_testPushFrontManyElements;

static class TestDescription_suite_ListTest_testPushFrontOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPushFrontOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 272, "testPushFrontOneElement" ) {}
 void runTest() { suite_ListTest.testPushFrontOneElement(); }
} testDescription_suite_ListTest_testPushFrontOneElement;

static class TestDescription_suite_ListTest_testPushEnd : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPushEnd() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 279, "testPushEnd" ) {}
 void runTest() { suite_ListTest.testPushEnd(); }
} testDescription_suite_ListTest_testPushEnd;

static class TestDescription_suite_ListTest_testPushEndOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPushEndOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 290, "testPushEndOneElement" ) {}
 void runTest() { suite_ListTest.testPushEndOneElement(); }
} testDescription_suite_ListTest_testPushEndOneElement;

static class TestDescription_suite_ListTest_testPopEndManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPopEndManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 297, "testPopEndManyElements" ) {}
 void runTest() { suite_ListTest.testPopEndManyElements(); }
} testDescription_suite_ListTest_testPopEndManyElements;

static class TestDescription_suite_ListTest_testPopEndOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPopEndOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 309, "testPopEndOneElement" ) {}
 void runTest() { suite_ListTest.testPopEndOneElement(); }
} testDescription_suite_ListTest_testPopEndOneElement;

static class TestDescription_suite_ListTest_testPopEndNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPopEndNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 315, "testPopEndNoElements" ) {}
 void runTest() { suite_ListTest.testPopEndNoElements(); }
} testDescription_suite_ListTest_testPopEndNoElements;

static class TestDescription_suite_ListTest_testPopFrontManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPopFrontManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 326, "testPopFrontManyElements" ) {}
 void runTest() { suite_ListTest.testPopFrontManyElements(); }
} testDescription_suite_ListTest_testPopFrontManyElements;

static class TestDescription_suite_ListTest_testPopFrontOneElement : public CxxTest::RealTestDes