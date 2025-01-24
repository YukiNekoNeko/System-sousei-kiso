/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	
	int intelligence = (rand() % 20) +1;
	int stamina = (rand() % (20-intelligence)) +1;
	int charisma = 20 - intelligence - stamina;
	
	printf("intelligence is %d\n", intelligence);
	printf("stamina is %d\n", stamina);
	printf("charisma is %d\n", charisma);
	
	if ((intelligence > stamina ) && (intelligence > charisma))
	{
	    printf("mage");
	
	}else if((charisma > stamina ) && (charisma > intelligence))
	{
	    printf("thief");
	
	}else if((stamina > charisma) && (stamina > intelligence))
	{
	    printf("knight");
	
	}else{
	    printf("?");
	}
	
	return 0;
}

