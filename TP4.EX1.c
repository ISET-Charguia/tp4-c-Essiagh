/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int s,j,f;
const int n=20;
int t[n];
float moy;
printf("donner la taille du tableau");
scanf("%d",&f);
s=0;
for(j=0;j<=f;j++) {
	printf("t[%d]",j);
	scanf("%d",&t[j]);
	s=s+t[j];
}
moy=s+(0.0)/f;
printf("%f",moy);
}
