/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const int n,n1,n2=50;
	int t[n],tp[n1],tn[n2];
int i,d,c,j,a,b;
printf("donner la taille du tableau");
scanf("%d",&d);
j=0;
c=0;
for(i=0;i<=d;i++);
printf("t[%d]",i);
scanf("%d",&t[i]);
if(t[i]<0) {
tn[c]=t[i];
c=c+i;
}
else {
	tp[j]=t[i];
	j++;
}
printf ("les elements de tn est \n");
for(b=0;b<j;b++) {
	printf(" ");
	printf("%d",tp[b]);
   }
}
