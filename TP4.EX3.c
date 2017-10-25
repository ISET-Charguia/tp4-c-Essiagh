/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const int n=50;
	int t[n];
	int m,i,b,j;
	printf("donner un entier a convertir");
	scanf("%d",&b);
			i=-1;
	do  { i=i+1;
	     m=b%2;
	     t[i]=m;
	     b=b/2;
	} while (b=!0);
	for(j=i;j>=0;j--)
	{printf("%d",t[j]);
	}
}
