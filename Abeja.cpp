#include<stdio.h>
#include<string.h>

int main()
{
	char s1[]="Abeja";
	char s2[]="Abeja";
	int i;
	
	printf("s1=%s\t", s1);
	printf("s2=%s\n", s2);
	
	i=strcmp(s1, s2);
	printf ("s1 es ");
	if(i<0) printf ("menor que ");
	else if (i>0) printf("mayor que ");
	else printf("igual a ");
	printf("s2\n");
	printf("\n\nEl valor de %1", i);
	return 0;
}