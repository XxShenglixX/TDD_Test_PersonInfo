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

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)21, UNITY_DISPLAY_STYLE_INT);

}



void test_setAge_given_131_should_return0()

{

 PersonInfo test = {.age = 131};



 int indicator;

 indicator = setAge(&test,test.age);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)30, UNITY_DISPLAY_STYLE_INT);

}



void test_setAge_given_130_should_return1()

{

 PersonInfo test = {.age = 130};



 int indicator;

 indicator = setAge(&test,test.age);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)39, UNITY_DISPLAY_STYLE_INT);

}



void test_setAge_given_0_should_return1()

{

 PersonInfo test = {.age = 0};



 int indicator;

 indicator = setAge(&test,test.age);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)48, UNITY_DISPLAY_STYLE_INT);

}



void test_setAge_given_99_should_return1()

{

 PersonInfo test = {.age = 99};



 int indicator;

 indicator = setAge(&test,test.age);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)57, UNITY_DISPLAY_STYLE_INT);

}





void test_setHeight_given_negative_0point01should_return0()

{

 PersonInfo test = {.height = -0.01};



 int indicator;

 indicator = setHeight(&test,test.height);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)67, UNITY_DISPLAY_STYLE_INT);

}



void test_setHeight_given_3point001_should_return0()

{

 PersonInfo test = {.height = 3.001};



 int indicator;

 indicator = setHeight(&test,test.height);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)76, UNITY_DISPLAY_STYLE_INT);

}



void test_setHeight_given_0_should_return1()

{

 PersonInfo test = {.height = 0};



 int indicator;

 indicator = setHeight(&test,test.height);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)85, UNITY_DISPLAY_STYLE_INT);

}



void test_setHeight_given_3_should_return1()

{

 PersonInfo test = {.height = 3};



 int indicator;

 indicator = setHeight(&test,test.height);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)94, UNITY_DISPLAY_STYLE_INT);

}



void test_setHeight_given_1point7_should_return1()

{

 PersonInfo test = {.height = 1.7};



 int indicator;

 indicator = setHeight(&test,test.height);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)103, UNITY_DISPLAY_STYLE_INT);

}





void test_setTelephone_given_00012345_should_return0()

{

 PersonInfo test = {.telephone = 00012345};



 int indicator;

 indicator = setTelephone(&test,test.telephone);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)113, UNITY_DISPLAY_STYLE_INT);

}



void test_setTelephone_given_100000000_should_return0()

{

 PersonInfo test = {.telephone = 100000000};



 int indicator;

 indicator = setTelephone(&test,test.telephone);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)122, UNITY_DISPLAY_STYLE_INT);

}



void test_setTelephone_given_10023456_should_return1()

{

 PersonInfo test = {.telephone = 10023456};



 int indicator;

 indicator = setTelephone(&test,test.telephone);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)131, UNITY_DISPLAY_STYLE_INT);

}







void test_setFirstName_given_emptystring()

{

 PersonInfo test = {.firstName = ((void *)0)};



 int indicator;

 indicator = setFirstName(&test,((void *)0));

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)142, UNITY_DISPLAY_STYLE_INT);

}



void test_setFirstName_given_B3njamin()

{

 PersonInfo test = {.firstName = "B3njamin"};



 int indicator;

 indicator = setFirstName(&test,&test.firstName);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)151, UNITY_DISPLAY_STYLE_INT);

}



void test_setFirstName_given_blank_Benjamin()

{

 PersonInfo test = {.firstName = " Benjamin"};



 int indicator;

 indicator = setFirstName(&test,&test.firstName);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)160, UNITY_DISPLAY_STYLE_INT);

}



void test_setFirstName_given_alliance_Benjamin()

{

 PersonInfo test = {.firstName = "@Benjamin"};



 int indicator;

 indicator = setFirstName(&test,&test.firstName);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)169, UNITY_DISPLAY_STYLE_INT);

}



void test_setFirstName_given_Aaron_Anthony_Benjamin_Bernard_27characters_name()

{

 PersonInfo test = {.firstName = "AaronAnthonyBenjaminBernard"};



 int indicator;

 indicator = setFirstName(&test,&test.firstName);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)178, UNITY_DISPLAY_STYLE_INT);

}



void test_setFirstName_given_Benjamin()

{

 PersonInfo test = {.firstName = "Benjamin"};



 int indicator;

 indicator = setFirstName(&test,&test.firstName);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)187, UNITY_DISPLAY_STYLE_INT);

}



void test_setFirstName_given_Benjamin_blank_Ooi()

{

 PersonInfo test = {.firstName = "Benjamin Ooi"};



 int indicator;

 indicator = setFirstName(&test,&test.firstName);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)196, UNITY_DISPLAY_STYLE_INT);

}





void test_setLastName_given_emptystring()

{

 PersonInfo test = {.lastName = ((void *)0)};



 int indicator;

 indicator = setLastName(&test,((void *)0));

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)206, UNITY_DISPLAY_STYLE_INT);

}



void test_setLastName_given_B3ng()

{

 PersonInfo test = {.lastName = "B3njamin"};



 int indicator;

 indicator = setLastName(&test,&test.lastName);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)215, UNITY_DISPLAY_STYLE_INT);

}



void test_setLastName_given_blank_Huat()

{

 PersonInfo test = {.lastName = " Huat"};



 int indicator;

 indicator = setLastName(&test,&test.lastName);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)224, UNITY_DISPLAY_STYLE_INT);

}



void test_setLastName_given_slash_Hui()

{

 PersonInfo test = {.lastName = "/Hui"};



 int indicator;

 indicator = setLastName(&test,&test.lastName);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)233, UNITY_DISPLAY_STYLE_INT);

}



void test_setLastName_given_abcdefghijklmnopqrstuvwxyz_26characters_name()

{

 PersonInfo test = {.lastName = "abcdefghijklmnopqrstuvwxyz"};



 int indicator;

 indicator = setLastName(&test,&test.lastName);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)242, UNITY_DISPLAY_STYLE_INT);

}



void test_setLastName_given_Beng()

{

 PersonInfo test = {.lastName = "Beng"};



 int indicator;

 indicator = setLastName(&test,&test.lastName);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)251, UNITY_DISPLAY_STYLE_INT);

}



void test_setLastName_given_Ah_blank_Huat()

{

 PersonInfo test = {.lastName = "Ah Huat"};



 int indicator;

 indicator = setLastName(&test,&test.lastName);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((indicator)), (((void *)0)), (_U_UINT)260, UNITY_DISPLAY_STYLE_INT);

}











void test_setFirstName_setLastName_given_Tan__Ah_B3ng()

{

 PersonInfo test = {"Tan","Ah B3ng"};



 int indicator,indicator_lastName;

 indicator = setFirstName(&test,&test.firstName);

 indicator_lastName = setLastName(&test,&test.lastName);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)(((indicator && indicator_lastName))), (((void *)0)), (_U_UINT)274, UNITY_DISPLAY_STYLE_INT);

}



void test_setFirstName_setLastName_given_Tan__Ah_Be_symbol_g()

{

 PersonInfo test = {"Tan","Ah Be|\|g"};



 int indicator,indicator_lastName;

 indicator = setFirstName(&test,&test.firstName);

 indicator_lastName = setLastName(&test,&test.lastName);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)(((indicator && indicator_lastName))), (((void *)0)), (_U_UINT)284, UNITY_DISPLAY_STYLE_INT);

}



void test_setFirstName_setLastName_given_Tan__AhBang_AhBeng_AhBing_Ahh_21_characters_name()

{

 PersonInfo test = {"Tan","AhBangAhBengAhBingAhh"};



 int indicator,indicator_lastName;

 indicator = setFirstName(&test,&test.firstName);

 indicator_lastName = setLastName(&test,&test.lastName);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)(((indicator && indicator_lastName))), (((void *)0)), (_U_UINT)294, UNITY_DISPLAY_STYLE_INT);

}





void test_setFirstName_setLastName_given_Tan__null()

{

 PersonInfo test = {"Tan",((void *)0)};



 int indicator,indicator_lastName;

 indicator = setFirstName(&test,&test.firstName);

 indicator_lastName = setLastName(&test,((void *)0));

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)(((indicator && indicator_lastName))), (((void *)0)), (_U_UINT)305, UNITY_DISPLAY_STYLE_INT);

}















void test_setFirstName_setLastName_given_T_alliance_n__Ah_Beng()

{

 PersonInfo test = {"T@n","Ah Beng"};



 int indicator,indicator_lastName;

 indicator = setFirstName(&test,&test.firstName);

 indicator_lastName = setLastName(&test,&test.lastName);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)(((indicator && indicator_lastName))), (((void *)0)), (_U_UINT)321, UNITY_DISPLAY_STYLE_INT);

}



void test_setFirstName_setLastName_given_T8n__Ah_Beng()

{

 PersonInfo test = {"T8n","Ah Beng"};



 int indicator,indicator_lastName;

 indicator = setFirstName(&test,&test.firstName);

 indicator_lastName = setLastName(&test,&test.lastName);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)(((indicator && indicator_lastName))), (((void *)0)), (_U_UINT)331, UNITY_DISPLAY_STYLE_INT);

}



void test_setFirstName_setLastName_given_null__Ah_Beng()

{

 PersonInfo test = {"","Ah Beng"};



 int indicator,indicator_lastName;

 indicator = setFirstName(&test,((void *)0));

 indicator_lastName = setLastName(&test,&test.lastName);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)(((indicator && indicator_lastName))), (((void *)0)), (_U_UINT)341, UNITY_DISPLAY_STYLE_INT);

}



void test_setFirstName_setLastName_given_TanTanTanTanTanTanTanTan__Ah_Beng()

{

 PersonInfo test = {"TanTanTanTanTanTanTanTan","Ah Beng"};



 int indicator,indicator_lastName;

 indicator = setFirstName(&test,&test.firstName);

 indicator_lastName = setLastName(&test,&test.lastName);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)(((indicator && indicator_lastName))), (((void *)0)), (_U_UINT)351, UNITY_DISPLAY_STYLE_INT);

}

void test_setFirstName_setLastName_given_Tan__Ah_Beng()

{

 PersonInfo test = {"Tan","Ah Beng"};



 int indicator,indicator_lastName;

 indicator = setFirstName(&test,&test.firstName);

 indicator_lastName = setLastName(&test,&test.lastName);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)(((indicator && indicator_lastName))), (((void *)0)), (_U_UINT)360, UNITY_DISPLAY_STYLE_INT);

}
