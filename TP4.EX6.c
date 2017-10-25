#include <stdio.h>

int main()
{
	const int a=20;
	int T1[a],T2[a],T3[a],i,j,k,s,r;
	printf("donner la taille du premier tableau: ");
	scanf("%d",&s);
	printf("donner la taille du deuxieme tableau :");
	scanf("%d",&r);
	for (i=0;i<s;i++)
	{
		printf("Saisie T[%d]",i);
		scanf("%d",&T1[i]);
	}
	for (i=0;i<r;i++)
	{
		printf("Saisie T[%d]",i);
		scanf("%d",&T2[i]);
	}
	for (i=0;i<s+r;i++)
	{
		for (k=0;k<s;k++)
		{
		   T3[i]=T1[i];
		}
		for (i=0;j<r;j++)
		{
		   if (T2[j]<T3[i])
		   {
			   T3[i+1]=T3[i];
			   T3[i]=T2[j];
		   }
		   else
		   {
			   T3[i]=T2[j];
		   }
		}
	}
	for (j=0;j<r+s;j++)
	{
		printf("\n",T3[j]);
	}
}
