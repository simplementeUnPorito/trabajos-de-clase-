#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *concatenar(char *a,int *l,int argc)
{
	int sum;
	for (int i=0;i<strlen(a);i++)
	{
		*(l++)=strlen(*(a++));
		sum+=strlen(*(a++));
	}
	char *b=malloc(sum*sizeof(*b));
	for (int m=0;m<argc;m++)
	{
		for (int n=0;n<strlen(*(a+m));n++)
		{
				(b++)=(*(a+m));
		}
	}
	return *b;
}

int main(int argc, char **argv){
	int longitud[argc];
for (int i=0;i<argc;i++)
	printf("%s",*(argv+i));
char *c=concatenar(*argv,longitud,argc);
printf("resultado: %s/n",*c);
printf("cantidad:");
for (int k=0;k<argc;k++)
	printf("%d",longitud[k]);
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// @param a 
/// @param l 
/// @param argc 
/// @return 
char *concatenar(char *a,int *l,int argc)
{
	int sum;
	for (int i=0;i<strlen(a++);i++)
	{
		l[i]=strlen(a++);
		sum+=l[i];
	}
	char *b;
    b=(char*)malloc(sum*sizeof(b));
	for (int m=0;m<argc;m++)
	{
		for (int n=0;n<strlen(a++);n++)
		{
				b[m]=(a[m]);
		}
	}
	return *b;
}

int main(int argc, char **argv){
	int longitud[argc];
for (int i=0;i<argc;i++)
	printf("%s",*(argv++));
char c=concatenar(&(argv),longitud,argc);
printf("resultado: %s/n",c);
printf("cantidad:");
free(c);
for (int k=0;k<argc;k++)
	printf("%d",longitud[k]);
}
