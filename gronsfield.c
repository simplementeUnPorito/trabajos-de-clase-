#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * busca caracteres!=numeros
 */
/*
 * verifica si en la cadena de caracteres perteneciente a la clave de la encriptación existen caracteres
 * diferentes a números
 */
int verNum(char *sms)
{
	for (int i=0; i<strlen(sms); i++)
	{
		if((sms[i]<'0') || (sms[i]>'9'))
		{
			printf("código ingresado inválido");
			return 1;
		}
	}
	return 0;
}

/*
 * cuenta la cantidad de caracteres que hay dentro de la cadena
 */
int contarChar(int tam) //tamaño de argv[i]
{
	int cant = 0;

	for (int i=0; i<tam; i++)
		cant+=1;

	return cant;
}

/*
 * recibe la clave de desencriptación y el mensaje a desencriptar
 * va sumando cada caracter con su respectivo par numérico
 * como indica el método Gronsfeld.
 */
void desencriptar(char *sms, char *numEncrip)
{
	//Aquí se implementa el código para desencriptar
}

/*
 * funcion que convierte un array de caracteres en un string
 */
char* transString(char* arr)
{
    int length = strlen(arr);
    char* str = (char*)malloc(length + 1); // reservar memoria para la cadena
    int i;
    for (i = 0; i < length; i++) {
        str[i] = arr[i]; // copiar cada carácter del array en la cadena
    }
    str[length] = '\0'; // agregar el carácter nulo para indicar el final de la cadena
    return str; // devolver la cadena
}

/*
 * recibe la clave de encriptación y el mensaje a encriptar
 * va sumando cada caracter con su respectivo par numérico
 * como indica el método Gronsfeld.
 */
void encriptar(char *sms, char *numEncrip) //recibe argv[i+1], argv[i]
{
	char *str=transString(numEncrip);
	char *ban=str;
    int tam = strlen(sms); //ingresa el tamaño de sms
    char a[tam + 1]; //crea vector para imprimir mensaje codificado

    for (int i = 0; i < tam; i++)
    {
		printf("%s,%s",sms[i],ban[i])//rificar valores 
        a[i]= sms[i] + ban[i] ; //se pueden sumar caracteres con números
    }

    printf("El mensaje encriptado queda: %s\n", a);
}

/*
 * el usuario va ingresando los datos necesarios mediante la consola
 * -->argv[0]: nombre del programa
 * -->argv[1]: c si quiere encriptar, d si quiere desencriptar
 * -->argv[2]: ingresa la clave de encriptación
 * -->argv[3]: ingresa el mensaje a encriptar/desencriptar
 */

int main(int argc, char **argv)
{
	if (verNum(argv[2])==1) return 0;
	printf("%s,%s",argv[2],argv[3]);//para verificar valores 
	if (contarChar(strlen(argv[2]))!=contarChar(strlen(argv[3]))) //verifica tamaño
	{
		printf("Número de clave diferente al número de mensaje\n");
		return 0;
	}

	if (*argv[1]=='c')
	{
		encriptar(argv[3], argv[2]);
	}
	else if (*argv[1]=='d')
	{
		desencriptar(argv[3], argv[2]);
	}
	else
	{
		printf("Opción inválida\n");
		return 0;
	}

	return 0;
}

