#include<stdio.h>

void entenderPilha(int numero)
{
    if(numero>=1)
    {
	//printf("%d \t", numero);
        entenderPilha(numero-1);
	printf("%d \t", numero);
    }
}

int main()
{
    int n;

    printf("Informe um número: ");
    scanf("%d", &n);

    entenderPilha(n);

    return 0;
}
