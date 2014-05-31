#include "PersonInfo.h"
#include <stdio.h>
#include <ctype.h>

/**
 *Set the first name
 *
 *Input:
 *	info	is a pointer to person's info
 *	name	contains the first name
 *Return:
 *	0 to indicate failure
 *	1 to indicate success
 */
int setFirstName(PersonInfo *info, char *name)
{
	if (name == NULL ) // Check for empty string
		{
			printf("No first name detected !");
			return 0; 
		}
	else
		{
			int i = 0;
			
			while( name[i] != '\0' ) // Count for the total number of characters in the string until end of the string
				i++ ;
				
			if  ( i > 20 ) // Check if the name has more than 20 characters, it will return 0
				{
					printf("Insufficient space to allocate your lengthy first name.I'm sorry !");
					return 0;
				}
			
			int j = 0 ;
			for (j = 0 ; name[j] != '\0' ; ) //Loop throughout the string 
			{
						
				if ( isalpha(name[j]) != 0 ) // If the current character is an alphabet, isalpha will return a value not equal to 0
						j++;				 // and increment the counter to check for next character
				
				else if ( isblank(name[j]) != 0 ) // Check for space in first name , isblank return not zero when true
					{
						if ( j == 0 )	// To check for the starting character of the name cannot be blank or space 
						{	
							printf("You can't have your first name starting with a blank");
							return 0;
						}
							
						else 
							j++;
					}
					
				else if ( isdigit(name[j]) != 0 ) //Check for presence of digits, isdigit will also return non zero value if true
					{
						printf("You have number/numbers in your first name @_@ ???");
						return 0;
					}
					
				else //If all the above condition aren't true, it will be characters liek @,_|\ and more....
					{
						printf("Invalid character found in your first name!");
						return 0;
					}
					
					
					
			}
					
			printf("Hello %s ",name); // Just to print out the first name
			return 1;	// Pass all the test and return 1 for success
				
		}
		
	
}

/**
 *Set the last name
 *
 *Input:
 *	info	is a pointer to person's info
 *	name	contains the last name
 *Return:
 *	0 to indicate failure
 *	1 to indicate success
 *
 * Note same comment and function as the setFirstName() but just with the changes from printing out first name to last name !!!
 */
int setLastName(PersonInfo *info, char *name)
{

	if (name == NULL )
		{
			printf("No last name detected !");
			return 0;
		}
	else
		{
			int i = 0;
			
			while( name[i] != '\0' )
				i++ ;
				
			if  ( i > 20 )
				{
					printf("Insufficient space to allocate your lengthy last name.I'm sorry !");
					return 0;
				}
			
			int j = 0 ;
			for (j = 0 ; name[j] != '\0' ; )
			{
						
				if ( isalpha(name[j]) != 0 )
						j++;
				
				else if ( isblank(name[j]) != 0 )
					{
						if ( j == 0 )
						{	
							printf("You can't have your last name starting with a blank");
							return 0;
						}
							
						else 
							j++;
					}
					
				else if ( isdigit(name[j]) != 0 )
					{
						printf("You have number/numbers in your last name @_@ ???");
						return 0;
					}
					
				else 
					{
						printf("Invalid character found in your last name !");
						return 0;
					}
					
					
					
			}
					
			printf("%s !",name); 
			return 1;	
				
		}
		
	
}

/**
 *Set the age of the person
 *
 *Input:
 *	info	is a pointer to person's info
 *	age		contains the age
 *Return:
 *	0 to indicate failure
 *	1 to indicate success
 *
 */
int setAge(PersonInfo *info, int age)
{
	if ((age <= 0) || (age > 130)) // Check if age is smaller or equal to 0 or if age is greater than 130
		{
			printf ("You have entered an invalid age that is %d years old !\n",age); //If true return 0 for error
			return 0;
		}
	else 
		{
			printf ("You are %d years old !\n",age);
			return 1;	
		}
}

/**
 *Set the height of the person
 *
 *Input:
 *	info		is a pointer to person's info
 *	height		contains the height
 *Return:
 *	0 to indicate failure
 *	1 to indicate success
 *
 */
int setHeight(PersonInfo *info,float height)
{
	if ( (height <= 0 ) || (height >3) ) // Check if height is smaller or equal to 0 meters or if height is greater than 3 meters
		{
			printf ("You have entered an invalid height that is %f meters !\n",height); //If true return 0 for error
			return 0;
		}
	else 
		{
			printf ("You are %f meters !\n",height);
			return 1;	
		}
}


/**
 *Set the telephone number of the person
 *
 *Input:
 *	info			is a pointer to person's info
 *	telephone		contains the telephone number
 *Return:
 *	0 to indicate failure
 *	1 to indicate success
 *
 */
int setTelephone(PersonInfo *info, unsigned long int telephone)
{
	if (telephone < 999999) // If the number is smaller than 999999, which means in terms of 8digits number, there will be a 0 infront
		{					// example 1234 also = 0000 1234
			printf ("You have entered an invalid telephone number which starts from zero !");
			return 0 ;
		}
	else if (telephone > 99999999 )//If the number is larger than 99999999 , there will be a total of 9 digits for the number which
		{						   // is 1 0000 0000 and above
			printf ("You have entered an invalid telephone number which has more than 8 digits !");
			return 0 ;
		}
	else
		{
			printf ("Your have entered %lu as your telephone number !",telephone) ;
			return 1 ;
		}
}