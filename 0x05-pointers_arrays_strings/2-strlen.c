#include"main.h"
/**
 * length of strings
 *
 */

int _strlen(char *s)
{
	int i ;
	while(s[i]!= "\0")
	{
		i++;
	}
	return(i)
}
