#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenar(char *a,int *l,int argc,char *c)
{
	int sum;
	for (int i=0;i<strlen(a++);i++)
	{
		l[i]=strlen(a++);
		sum+=l[i];
	}
    c=malloc(sum*sizeof(char));
	for (int m=0;m<argc;m++)
	{
		for (int n=0;n<strlen(a++);n++)
		{
				c[m]=a[m];
		}
	}
}

int main(int argc, char **argv){
	int longitud[argc];
for (int i=0;i<argc;i++)
	printf("%s",argv[i]);
char *c;
concatenar(argv,longitud,argc,c);
printf("resultado: %s/n",c);
printf("cantidad:");
free(c);
for (int k=0;k<argc;k++)
	printf("%d",longitud[k]);
}
