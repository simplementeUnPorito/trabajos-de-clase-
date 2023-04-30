#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * el trabajo de este programa es recivir los argumentos que carga el usuario, meterlos todos dentro de una cadena e imprimirla
 * ademas tambien debe imprimir la cantidad de carateres de cada argumento 
 */

/*
 * funcion encargada de concatenar
 * **a--> argv (puntero a vector de punteros)
 * *l--> matriz en la que se quiere guardar la longitud de cada argumento
 * argc--> cantidad de argumentos
 * *c--> la intencion es que sea utilizado para hacer la string (fernando pidio que lo hagamos asi para practicar con la memoria dinamica)
 */
void concatenar(char **a,int *l,int argc,char *c)
{
	int sum=0;
	for (int i=0;i<strlen(a[i]);i++)//en esta parte se carga en l la cantidad de caracteres de cada argumento
	{
		l[i]=strlen(a[i]);
		sum+=l[i];
	}
    c=malloc(sum*sizeof(char));		//se reserva el espacio en c para almacenar todos los caracteres de las cadenas ingresadas 
	for (int m=0;m<argc;m++)	//para recorrer todos los argumentos 
	{
		for (int n=0;n<strlen(a[n]);n++)//para recorrer por cada caracter del argumento correspondiente 	
		{
				c[m]=*a[m];			//se cargan los caracteres 
		}
	}
}

int main(int argc, char **argv){
	int longitud[argc];
for (int i=0;i<argc;i++)
	printf("%s",argv[i]);
char *c;
concatenar(argv,longitud,argc,&c);
printf("\n");
printf("resultado: %s",c);
printf("\n");
printf("cantidad:");
free(c);
for (int k=0;k<argc;k++)
	printf("%d,",longitud[k]);
}
