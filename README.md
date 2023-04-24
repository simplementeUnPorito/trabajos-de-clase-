#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int contarChar(int tam)
{
	int cant;
	for (int i=0;i<tam+1;cant+=1){
	}
	return cant;
}

void desemcriptar(char *sms,char numEncrip)
{

}

void encriptar(char *sms,char *numEncrip)
{
    int len = strlen(sms);
    int a[len + 1];
    for (int i = 0; i < len; i++) {
        a[i] = atoi(sms[i]) + atoi(numEncrip[i]);
    }
    printf("%s", a);
}
int main(int argc, char **argv)
{
	if(contarChar(strlen(argv[2]))!=contarChar(strlen(argv[3])))
	{
		printf("num clave != num sms\n");
		return 0;
	}
	argv[1]=='c'? encriptar(argv[3],argv[2]):desemcriptar(argv[3],argv[2]);
}
