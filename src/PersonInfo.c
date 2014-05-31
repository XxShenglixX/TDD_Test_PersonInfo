#include "PersonInfo.h"
#include <stdio.h>


/*
*/
int setAge(PersonInfo *info, int age)
{
	if ((age < 0) || (age > 130))
		{
			printf ("You have entered an invalid age that is %d years old !\n",age);
			return 0;
		}
	else 
		{
			printf ("You are %d years old !\n",age);
			return 1;	
		}
}

int setHeight(PersonInfo *info,float height)
{
	if ( (height < 0 ) || (height >3) )
		{
			printf ("You have entered an invalid height that is %f meters !\n",height);
			return 0;
		}
	else 
		{
			printf ("You are %f meters !\n",height);
			return 1;	
		}
}

int setTelephone(PersonInfo *info, unsigned long int telephone)
{
	if (telephone < 999999)
		{
			printf ("You have entered an invalid telephone number which starts from zero !");
			return 0 ;
		}
	else if (telephone > 99999999 )
		{
			printf ("You have entered an invalid telephone number which has more than 8 digits !");
			return 0 ;
		}
	else
		{
			printf ("Your have entered %lu as your telephone number !",telephone) ;
			return 1 ;
		}
}