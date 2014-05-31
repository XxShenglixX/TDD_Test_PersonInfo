/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_setAge_given_negative1_should_return0(void);
extern void test_setAge_given_199_should_return0(void);
extern void test_setAge_given_131_should_return0(void);
extern void test_setAge_given_130_should_return1(void);
extern void test_setAge_given_0_should_return1(void);
extern void test_setAge_given_99_should_return1(void);
extern void test_setHeight_given_negative_0point01should_return0(void);
extern void test_setHeight_given_3point001_should_return0(void);
extern void test_setHeight_given_100_should_return0(void);
extern void test_setHeight_given_0_should_return1(void);
extern void test_setHeight_given_1point7_should_return1(void);
extern void test_setHeight_given_3m_should_return1(void);
extern void test_setTelephone_given_00012345_should_return0(void);
extern void test_setTelephone_given_123456789_should_return0(void);
extern void test_setTelephone_given_100000000_should_return0(void);
extern void test_setTelephone_given10023456_should_return1(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_PersonInfo.c";
  UnityBegin();
  RUN_TEST(test_setAge_given_negative1_should_return0, 13);
  RUN_TEST(test_setAge_given_199_should_return0, 22);
  RUN_TEST(test_setAge_given_131_should_return0, 31);
  RUN_TEST(test_setAge_given_130_should_return1, 40);
  RUN_TEST(test_setAge_given_0_should_return1, 49);
  RUN_TEST(test_setAge_given_99_should_return1, 58);
  RUN_TEST(test_setHeight_given_negative_0point01should_return0, 67);
  RUN_TEST(test_setHeight_given_3point001_should_return0, 76);
  RUN_TEST(test_setHeight_given_100_should_return0, 85);
  RUN_TEST(test_setHeight_given_0_should_return1, 95);
  RUN_TEST(test_setHeight_given_1point7_should_return1, 104);
  RUN_TEST(test_setHeight_given_3m_should_return1, 113);
  RUN_TEST(test_setTelephone_given_00012345_should_return0, 122);
  RUN_TEST(test_setTelephone_given_123456789_should_return0, 131);
  RUN_TEST(test_setTelephone_given_100000000_should_return0, 140);
  RUN_TEST(test_setTelephone_given10023456_should_return1, 149);

  return (UnityEnd());
}