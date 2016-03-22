/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){

	if (str == NULL)
		return NULL;
	char *res=(char *)malloc(sizeof(char)); int len = 0, leftspc = 0,i=0;
	while (str[leftspc] == ' ')
		leftspc++;
	len = leftspc;
	while (str[len] != NULL)
		len++;
	len = len - leftspc;
	while (str[len - 1] == ' ')
		len--;

	while (str[len] != ' '&&len>=0)
	{
		res[i++] = str[len];
		len--;
	}
	res[i] = '\0';
	int j = 0;
	while (i/2!=0)
	{
		char temp = res[j];
		res[j] = res[i];
		res[i] = temp;
		j++; i--;

	}
	return res;

}
