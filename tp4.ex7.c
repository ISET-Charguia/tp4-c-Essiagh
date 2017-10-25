#include <stdio.h>

int main()
{
	const int a=20;
	int tab[a][a];
	int i,c,l,j,S=0;
	printf("Taper le nombre des lignes");
	scanf("%d",&l);
	printf("Taper le nombre des colonnes");
	scanf("%d",&c);
	for (i=0;i<l;i++)
	{
		for (j=0;j<c;j++)
		{
		printf("Taper T[%d,%d]",i,j);
		scanf("%d",&tab[i][j]);
		S=S+tab[i][j];
		}
	}
	for (i=0;i<l;i++)
	{
		for (j=0;j<c;j++)
		{
		    printf("\n %d",tab[i][j]);
		}
	}
	printf("\nLa moyenne des entiers du tableau= %d",S/(l*c));
	printf("\nLa somme des entiers du tableau= %d",S);
	return 0;
}
