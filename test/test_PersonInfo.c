#include "unity.h"
#include "PersonInfo.h"


void setUp(void)
{
}

void tearDown(void)
{
}

void test_setAge_given_negative1_should_return0()
{
	PersonInfo test = {.age = -1};

	int indicator;
	indicator = setAge(&test,test.age);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setAge_given_199_should_return0()
{
	PersonInfo test = {.age = 199};

	int indicator;
	indicator = setAge(&test,test.age);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setAge_given_131_should_return0()
{
	PersonInfo test = {.age = 131};

	int indicator;
	indicator = setAge(&test,test.age);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setAge_given_130_should_return1()
{
	PersonInfo test = {.age = 130};

	int indicator;
	indicator = setAge(&test,test.age);
	TEST_ASSERT_EQUAL(1,indicator);
}

void test_setAge_given_0_should_return1()
{
	PersonInfo test = {.age = 0};

	int indicator;
	indicator = setAge(&test,test.age);
	TEST_ASSERT_EQUAL(1,indicator);
}

void test_setAge_given_99_should_return1()
{
	PersonInfo test = {.age = 99};

	int indicator;
	indicator = setAge(&test,test.age);
	TEST_ASSERT_EQUAL(1,indicator);
}

void test_setHeight_given_negative_0point01should_return0()
{
	PersonInfo test = {.height = -0.01};

	int indicator;
	indicator = setHeight(&test,test.height);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setHeight_given_3point001_should_return0()
{
	PersonInfo test = {.height = 3.001};

	int indicator;
	indicator = setHeight(&test,test.height);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setHeight_given_100_should_return0()
{
	PersonInfo test = {.height = 100};

	int indicator;
	indicator = setHeight(&test,test.height);
	TEST_ASSERT_EQUAL(0,indicator);
}


void test_setHeight_given_0_should_return1()
{
	PersonInfo test = {.height = 0};

	int indicator;
	indicator = setHeight(&test,test.height);
	TEST_ASSERT_EQUAL(1,indicator);
}

void test_setHeight_given_1point7_should_return1()
{
	PersonInfo test = {.height = 1.7};

	int indicator;
	indicator = setHeight(&test,test.height);
	TEST_ASSERT_EQUAL(1,indicator);
}

void test_setHeight_given_3m_should_return1()
{
	PersonInfo test = {.height = 3};

	int indicator;
	indicator = setHeight(&test,test.height);
	TEST_ASSERT_EQUAL(1,indicator);
}

void test_setTelephone_given_00012345_should_return0()
{
	PersonInfo test = {.telephone = 00012345};

	int indicator;
	indicator = setTelephone(&test,test.telephone);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setTelephone_given_123456789_should_return0()
{
	PersonInfo test = {.telephone = 123456789};

	int indicator;
	indicator = setTelephone(&test,test.telephone);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setTelephone_given_100000000_should_return0()
{
	PersonInfo test = {.telephone = 100000000};

	int indicator;
	indicator = setTelephone(&test,test.telephone);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setTelephone_given_10023456_should_return1()
{
	PersonInfo test = {.telephone = 10023456};

	int indicator;
	indicator = setTelephone(&test,test.telephone);
	TEST_ASSERT_EQUAL(1,indicator);
}

void test_setFirstName_given_emptystring()
{
	PersonInfo test = {.firstName = {}};

	int indicator;
	indicator = setFirstName(&test,);
	TEST_ASSERT_EQUAL(1,indicator);
}