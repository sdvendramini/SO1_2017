#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "commands.c"


int command_count( char * command )
{

	int i=0;
	int c=1; 								//arranca en 1 para que cuente la ultima palabra 
	if(command!=NULL)						//del string. command_arg1_arg2\n  los '_' son los DIVIDER=espacio
	{
		while(command[i]!='\0')
		{
			if(command[i]==DIVIDER)
			{
				c++;
			}
		i++;
		}
		return c;
	}
	else
	{
		printf("%s\n","Cadena invalida");
		return -1; // ver que significa -1
	}

}

