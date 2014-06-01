#include "unity.h"
#include "PersonInfo.h"


void setUp(void)
{
}

void tearDown(void)
{
}


/*Testing for age only*/
void test_setAge_given_negative1_should_return0() //Test age -1 , expect 0, 0 < age < 130
{
	PersonInfo test = {.age = -1};

	int indicator;
	indicator = setAge(&test,test.age);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setAge_given_131_should_return0() //Test age 131, expect 0, larger than 130
{
	PersonInfo test = {.age = 131};

	int indicator;
	indicator = setAge(&test,test.age);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setAge_given_130_should_return1() //Test age 130, expect 1 , limit at 130
{
	PersonInfo test = {.age = 130};

	int indicator;
	indicator = setAge(&test,test.age);
	TEST_ASSERT_EQUAL(1,indicator);
}

void test_setAge_given_0_should_return1() //Test age 0, expect 0 , age must be greater than 0
{
	PersonInfo test = {.age = 0};

	int indicator;
	indicator = setAge(&test,test.age);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setAge_given_99_should_return1() //Test age 99 , within age limit
{
	PersonInfo test = {.age = 99};

	int indicator;
	indicator = setAge(&test,test.age);
	TEST_ASSERT_EQUAL(1,indicator);
}

/*Testing for height only*/
void test_setHeight_given_negative_0point01should_return0() //Test height 0.01 , expect 0 ,0 < height < 3
{
	PersonInfo test = {.height = -0.01};

	int indicator;
	indicator = setHeight(&test,test.height);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setHeight_given_3point001_should_return0() //Test height 3.001 , expect 0, height larger than 3
{
	PersonInfo test = {.height = 3.001};

	int indicator;
	indicator = setHeight(&test,test.height);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setHeight_given_0_should_return1() //Test height 0 . expect 0, height must be larger than 0
{
	PersonInfo test = {.height = 0};

	int indicator;
	indicator = setHeight(&test,test.height);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setHeight_given_3_should_return1() //Test height 3,expect 1 , height at border line 3 meter
{
	PersonInfo test = {.height = 3};

	int indicator;
	indicator = setHeight(&test,test.height);
	TEST_ASSERT_EQUAL(1,indicator);
}

void test_setHeight_given_1point7_should_return1() //Test height 1.7 , expect 1, height within limits
{
	PersonInfo test = {.height = 1.7};

	int indicator;
	indicator = setHeight(&test,test.height);
	TEST_ASSERT_EQUAL(1,indicator);
}


void test_setTelephone_given_00012345_should_return0() //Test 00012345, expect 0, telephone number must no start with 0
{
	PersonInfo test = {.telephone = 00012345};

	int indicator;
	indicator = setTelephone(&test,test.telephone);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setTelephone_given_100000000_should_return0() //Test 100000000, expect 0,telephone number exceeded 9digits
{
	PersonInfo test = {.telephone = 100000000};

	int indicator;
	indicator = setTelephone(&test,test.telephone);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setTelephone_given_10023456_should_return1() //Test 10023456,expect 1 , valid telephone number
{
	PersonInfo test = {.telephone = 10023456};

	int indicator;
	indicator = setTelephone(&test,test.telephone);
	TEST_ASSERT_EQUAL(1,indicator);
}

 
/*Testing for first names only*/
void test_setFirstName_given_emptystring() //Test NULL / empty string , expect 0, first name must not be empty
{
	PersonInfo test = {.firstName = NULL};

	int indicator;
	indicator = setFirstName(&test,NULL);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setFirstName_given_B3njamin() //Test B3njamin, expect 0 , first name must not include digits
{
	PersonInfo test = {.firstName = "B3njamin"};

	int indicator;
	indicator = setFirstName(&test,&test.firstName);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setFirstName_given_blank_Benjamin() //Test (space)Benjamin, expect 0, first name must not start with space
{
	PersonInfo test = {.firstName = " Benjamin"};

	int indicator;
	indicator = setFirstName(&test,&test.firstName);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setFirstName_given_alliance_Benjamin() //Test @Benjamin, expect 0, first name contain non alphabet characters
{
	PersonInfo test = {.firstName = "@Benjamin"};

	int indicator;
	indicator = setFirstName(&test,&test.firstName);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setFirstName_given_Aaron_Anthony_Benjamin_Bernard_27characters_name() //Test AaronAnthonyBenjaminBernard, expect 0, first name more than 20characters
{																			    
	PersonInfo test = {.firstName = "AaronAnthonyBenjaminBernard"};

	int indicator;
	indicator = setFirstName(&test,&test.firstName);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setFirstName_given_Benjamin() //Test Benjamin, expect 1, valid first name
{
	PersonInfo test = {.firstName = "Benjamin"};

	int indicator;
	indicator = setFirstName(&test,&test.firstName);
	TEST_ASSERT_EQUAL(1,indicator);
}

void test_setFirstName_given_Benjamin_blank_Ooi() //Test Benjamin Ooi, expect 1, valid first name
{
	PersonInfo test = {.firstName = "Benjamin Ooi"};

	int indicator;
	indicator = setFirstName(&test,&test.firstName);
	TEST_ASSERT_EQUAL(1,indicator);
}

/*Testing for last names only*/
void test_setLastName_given_emptystring()//Test empty string or NULL , expect 0 , name must not be empty
{
	PersonInfo test = {.lastName = NULL};

	int indicator;
	indicator = setLastName(&test,NULL);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setLastName_given_B3ng()//Test B3ng , expect 0 , contains digit in the name
{
	PersonInfo test = {.lastName = "B3njamin"};

	int indicator;
	indicator = setLastName(&test,&test.lastName);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setLastName_given_blank_Huat()//Test (space)Huat , expect 0 , name starting with space,
{	
	PersonInfo test = {.lastName = " Huat"};

	int indicator;
	indicator = setLastName(&test,&test.lastName);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setLastName_given_slash_Hui()//Test /Hui , expect 0 , not an alphabet character present
{
	PersonInfo test = {.lastName = "/Hui"};

	int indicator;
	indicator = setLastName(&test,&test.lastName);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setLastName_given_abcdefghijklmnopqrstuvwxyz_26characters_name()//Test abcdefghijklmnopqrstuvwxyz , expect 0, maximum of 20characters in a name
{																			    
	PersonInfo test = {.lastName = "abcdefghijklmnopqrstuvwxyz"};

	int indicator;
	indicator = setLastName(&test,&test.lastName);
	TEST_ASSERT_EQUAL(0,indicator);
}

void test_setLastName_given_Beng()//Test Beng , expect 1 , valid name
{
	PersonInfo test = {.lastName = "Beng"};

	int indicator;
	indicator = setLastName(&test,&test.lastName);
	TEST_ASSERT_EQUAL(1,indicator);
}

void test_setLastName_given_Ah_blank_Huat()//Test Ah Huat , expect 1 , valid name spaces between two names are allowed
{
	PersonInfo test = {.lastName = "Ah Huat"};

	int indicator;
	indicator = setLastName(&test,&test.lastName);
	TEST_ASSERT_EQUAL(1,indicator);
}




/*Testing for first name and last name*/
void test_setFirstName_setLastName_given_Tan__Ah_B3ng() // Test Tan Ah B3ng , expect 0 , although first name is valid but last name contain digits
{
	PersonInfo test = {"Tan","Ah B3ng"};

	int indicator,indicator_lastName;
	indicator = setFirstName(&test,&test.firstName);
	indicator_lastName = setLastName(&test,&test.lastName);
	TEST_ASSERT_EQUAL(0,(indicator && indicator_lastName) );
}

void test_setFirstName_setLastName_given_Tan__Ah_Be_symbol_g() //Test Tan Ah Be|\|g, expect 0 , last name contain invalid characters
{
	PersonInfo test = {"Tan","Ah Be|\|g"};

	int indicator,indicator_lastName;
	indicator = setFirstName(&test,&test.firstName);
	indicator_lastName = setLastName(&test,&test.lastName);
	TEST_ASSERT_EQUAL(0,(indicator && indicator_lastName) );
}

void test_setFirstName_setLastName_given_Tan__AhBang_AhBeng_AhBing_Ahh_21_characters_name() //Test AhBangAhBengAhBingAhh, expect 0, last name more than 20characters
{																						   
	PersonInfo test = {"Tan","AhBangAhBengAhBingAhh"};

	int indicator,indicator_lastName;
	indicator = setFirstName(&test,&test.firstName);
	indicator_lastName = setLastName(&test,&test.lastName);
	TEST_ASSERT_EQUAL(0,(indicator && indicator_lastName) );
}


void test_setFirstName_setLastName_given_Tan__null() //Test Tan NULL, expect 0, last name is empty
{
	PersonInfo test = {"Tan",NULL};

	int indicator,indicator_lastName;
	indicator = setFirstName(&test,&test.firstName);
	indicator_lastName = setLastName(&test,NULL);
	TEST_ASSERT_EQUAL(0,(indicator && indicator_lastName) );
}







void test_setFirstName_setLastName_given_T_alliance_n__Ah_Beng() //Test T@n Ah Beng, expect 0, first name contain illegal characters
{
	PersonInfo test = {"T@n","Ah Beng"};

	int indicator,indicator_lastName;
	indicator = setFirstName(&test,&test.firstName);
	indicator_lastName = setLastName(&test,&test.lastName);
	TEST_ASSERT_EQUAL(0,(indicator && indicator_lastName) );
}

void test_setFirstName_setLastName_given_T8n__Ah_Beng() //Test T8n Ah Beng, expect 0, first name contain digits
{
	PersonInfo test = {"T8n","Ah Beng"};

	int indicator,indicator_lastName;
	indicator = setFirstName(&test,&test.firstName);
	indicator_lastName = setLastName(&test,&test.lastName);
	TEST_ASSERT_EQUAL(0,(indicator && indicator_lastName) );
}

void test_setFirstName_setLastName_given_null__Ah_Beng() //Test NULL Ah Beng, expect 0, first name is empty
{
	PersonInfo test = {"","Ah Beng"};

	int indicator,indicator_lastName;
	indicator = setFirstName(&test,NULL);
	indicator_lastName = setLastName(&test,&test.lastName);
	TEST_ASSERT_EQUAL(0,(indicator && indicator_lastName) );
}

void test_setFirstName_setLastName_given_TanTanTanTanTanTanTanTan__Ah_Beng() //Test TanTanTanTanTanTanTanTan Ah Beng, expect 0, first name exceeded 20characters
{
	PersonInfo test = {"TanTanTanTanTanTanTanTan","Ah Beng"};

	int indicator,indicator_lastName;
	indicator = setFirstName(&test,&test.firstName);
	indicator_lastName = setLastName(&test,&test.lastName);
	TEST_ASSERT_EQUAL(0,(indicator && indicator_lastName) );
}
void test_setFirstName_setLastName_given_Tan__Ah_Beng() //Test Tan Ah Beng, expect 1, first name and last name are valid
{
	PersonInfo test = {"Tan","Ah Beng"};

	int indicator,indicator_lastName;
	indicator = setFirstName(&test,&test.firstName);
	indicator_lastName = setLastName(&test,&test.lastName);
	TEST_ASSERT_EQUAL(1,(indicator && indicator_lastName) );
}
