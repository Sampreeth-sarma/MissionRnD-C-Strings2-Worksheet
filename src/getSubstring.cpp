/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>

char * get_sub_string(char *str, int i, int j){

	if (str == NULL)
		return NULL;
	if (i < 0 && j >= 0)
		i = 0;
	if (i <= 0 && j < 0)
		return NULL;
	int len = 0;
	while (str[len] != NULL)
		len++;
	if (j >= len)
		j = len - 1;
	char *res = (char *)malloc((j-i)*sizeof(char));
	int pos = 0,start=i,end=j;
	while (start <= end)
	{
		res[pos++] = str[start++];
	}
	//res[pos] = '\0';
	return res;

}
