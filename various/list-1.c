#include<stdio.h>
#include<stdbool.h>
#define n 10

typedef int tipoChave;

typedef struct
{
    tipoChave ch;
} Registro;

typedef struct
{
    Registro R[n];
    int nroElem;
} Lista;

void inicializarLista(Lista *l)
{
    l->nroElem = 0;
}

int verificarChave(Lista *l, tipoChave ch)
{
    int i = 0;

    while(i < l->nroElem)
    {
        if(ch == l->R[i])
	{
	    return i;
	}
	i++;
    }

    return -1;
}

int contarClientes(Lista *l)
{
    return l->nroElem;
}

void exibirLista(Lista *l)
{
    for(int i = 0; i < l->nroElem; i++)
    {
        printf("%d", l->R[i].ch);
    }
}

int main()
{
    Lista l1;
    inicializarLista(&l1);    

    return 0;
}
