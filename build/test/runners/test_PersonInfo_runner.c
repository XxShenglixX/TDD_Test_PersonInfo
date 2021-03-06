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
extern void test_setAge_given_131_should_return0(void);
extern void test_setAge_given_130_should_return1(void);
extern void test_setAge_given_0_should_return1(void);
extern void test_setAge_given_99_should_return1(void);
extern void test_setHeight_given_negative_0point01should_return0(void);
extern void test_setHeight_given_3point001_should_return0(void);
extern void test_setHeight_given_0_should_return1(void);
extern void test_setHeight_given_3_should_return1(void);
extern void test_setHeight_given_1point7_should_return1(void);
extern void test_setTelephone_given_00012345_should_return0(void);
extern void test_setTelephone_given_100000000_should_return0(void);
extern void test_setTelephone_given_10023456_should_return1(void);
extern void test_setFirstName_given_emptystring(void);
extern void test_setFirstName_given_B3njamin(void);
extern void test_setFirstName_given_blank_Benjamin(void);
extern void test_setFirstName_given_alliance_Benjamin(void);
extern void test_setFirstName_given_Aaron_Anthony_Benjamin_Bernard_27characters_name(void);
extern void test_setFirstName_given_Benjamin(void);
extern void test_setFirstName_given_Benjamin_blank_Ooi(void);
extern void test_setLastName_given_emptystring(void);
extern void test_setLastName_given_B3ng(void);
extern void test_setLastName_given_blank_Huat(void);
extern void test_setLastName_given_slash_Hui(void);
extern void test_setLastName_given_abcdefghijklmnopqrstuvwxyz_26characters_name(void);
extern void test_setLastName_given_Beng(void);
extern void test_setLastName_given_Ah_blank_Huat(void);
extern void test_setFirstName_setLastName_given_Tan__Ah_B3ng(void);
extern void test_setFirstName_setLastName_given_Tan__Ah_Be_symbol_g(void);
extern void test_setFirstName_setLastName_given_Tan__AhBang_AhBeng_AhBing_Ahh_21_characters_name(void);
extern void test_setFirstName_setLastName_given_Tan__null(void);
extern void test_setFirstName_setLastName_given_T_alliance_n__Ah_Beng(void);
extern void test_setFirstName_setLastName_given_T8n__Ah_Beng(void);
extern void test_setFirstName_setLastName_given_null__Ah_Beng(void);
extern void test_setFirstName_setLastName_given_TanTanTanTanTanTanTanTan__Ah_Beng(void);
extern void test_setFirstName_setLastName_given_Tan__Ah_Beng(void);


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
  RUN_TEST(test_setAge_given_negative1_should_return0, 15);
  RUN_TEST(test_setAge_given_131_should_return0, 24);
  RUN_TEST(test_setAge_given_130_should_return1, 33);
  RUN_TEST(test_setAge_given_0_should_return1, 42);
  RUN_TEST(test_setAge_given_99_should_return1, 51);
  RUN_TEST(test_setHeight_given_negative_0point01should_return0, 61);
  RUN_TEST(test_setHeight_given_3point001_should_return0, 70);
  RUN_TEST(test_setHeight_given_0_should_return1, 79);
  RUN_TEST(test_setHeight_given_3_should_return1, 88);
  RUN_TEST(test_setHeight_given_1point7_should_return1, 97);
  RUN_TEST(test_setTelephone_given_00012345_should_return0, 107);
  RUN_TEST(test_setTelephone_given_100000000_should_return0, 116);
  RUN_TEST(test_setTelephone_given_10023456_should_return1, 125);
  RUN_TEST(test_setFirstName_given_emptystring, 136);
  RUN_TEST(test_setFirstName_given_B3njamin, 145);
  RUN_TEST(test_setFirstName_given_blank_Benjamin, 154);
  RUN_TEST(test_setFirstName_given_alliance_Benjamin, 163);
  RUN_TEST(test_setFirstName_given_Aaron_Anthony_Benjamin_Bernard_27characters_name, 172);
  RUN_TEST(test_setFirstName_given_Benjamin, 181);
  RUN_TEST(test_setFirstName_given_Benjamin_blank_Ooi, 190);
  RUN_TEST(test_setLastName_given_emptystring, 200);
  RUN_TEST(test_setLastName_given_B3ng, 209);
  RUN_TEST(test_setLastName_given_blank_Huat, 218);
  RUN_TEST(test_setLastName_given_slash_Hui, 227);
  RUN_TEST(test_setLastName_given_abcdefghijklmnopqrstuvwxyz_26characters_name, 236);
  RUN_TEST(test_setLastName_given_Beng, 245);
  RUN_TEST(test_setLastName_given_Ah_blank_Huat, 254);
  RUN_TEST(test_setFirstName_setLastName_given_Tan__Ah_B3ng, 267);
  RUN_TEST(test_setFirstName_setLastName_given_Tan__Ah_Be_symbol_g, 277);
  RUN_TEST(test_setFirstName_setLastName_given_Tan__AhBang_AhBeng_AhBing_Ahh_21_characters_name, 287);
  RUN_TEST(test_setFirstName_setLastName_given_Tan__null, 298);
  RUN_TEST(test_setFirstName_setLastName_given_T_alliance_n__Ah_Beng, 314);
  RUN_TEST(test_setFirstName_setLastName_given_T8n__Ah_Beng, 324);
  RUN_TEST(test_setFirstName_setLastName_given_null__Ah_Beng, 334);
  RUN_TEST(test_setFirstName_setLastName_given_TanTanTanTanTanTanTanTan__Ah_Beng, 344);
  RUN_TEST(test_setFirstName_setLastName_given_Tan__Ah_Beng, 353);

  return (UnityEnd());
}
