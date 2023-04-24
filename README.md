#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * cuenta la cantidad de caracteres que hay dentro de la cadena
 */
int contarChar(int tam)//tamano de argv[i]
{
	int cant;
	for (int i=0;i<tam+1;cant+=1){
		printf("%d",cant);
	}
	return cant;
}

void desencriptar(char *sms,char *numEncrip)
{
//este hace ceci
}
/*
 * recibe la clave de encriptacion y el mensaje a encriptar
 * va sumando cada caracter con su respectivo par numerico
 * como indica el metodo gronsfeld.
 */
void encriptar(char *sms,char *numEncrip)//recibe argv[i+1],argv[i]
{
    int tam = strlen(sms);//ingresa el tamano de sms
    char a[tam + 1];//crea vector para imprimir mensaje codificado
    for (int i = 0; i < tam; i++) {
        int b = atoi(sms[i]) + atoi(numEncrip[i]);//se usa una variable de bandera para almacenar la suma de los caracteres
        a[i]='b';//se asigna el nuevo caracter a la posicion correspondiente
    }
    printf("el mensaje encriptado queda %s:\b",a);
}

/*
 * el usuario va ingresando los datos necesarios mediante la consola
 * -->agrv0:nombre del programa
 *-->argv1: c si quiere encriptar, d si quiere desencriptar 
 *-->argv2: ingresa el la clave de encriptacion 
 *-->argv3: ingresa el mensaje a encriptar 
 */

int main(int argc, char **argv)
{
	if(contarChar(strlen(argv[2]))!=contarChar(strlen(argv[3])))
	{
		printf("num clave != num sms\n");
		return 0;
	}
	*argv[1]=='c'? encriptar(argv[3],argv[2]) : desencriptar(argv[3],argv[2]);
}
