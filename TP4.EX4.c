/*
 ============================================================================
 Name        : EX4.c
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
	int t1[n],t2[n],t3[n];
	int i,j,a;
	printf("donner la taille du tableau:");
	scanf("%d",&a);
	for(i=1;i<a;i++){
		printf("t1[%d]",i);
		scanf("%d",&t1[i]);
	}
	for(j=0;j<a;j++){
		printf("t2[%d]",j);
		scanf("%d",&t2[j]);
		printf("le contenu de t1 avant permutation est \n");
		for(j=0;j<a;j++);
		printf("%d",t1[j]);
	}
	printf("\n");
	printf("le contenu de t2 avant permutation est \n");
	for (j=0;j<a;j++);
	printf("%d",t2[j]);
}
	printf("\n");
for(j=0;j<a;j++){
	t3[j]=t1[j];
	t1[j]=t2[j];
	t3[j]=t3[j];
}
printf("le contenu de t2 apres permutation");
for (j=0;j<a;j++);
	printf("%d",t2[j]);
