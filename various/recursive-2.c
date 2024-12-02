#include<stdio.h>

int calcularFatorial(int f)
{
    if(f == 0)
    {
        return 1;
    }

    return f * calcularFatorial(f - 1);
}

/*
void calcularPotencia(int b, int e)
{
    return calcularPotencia;
}
*/

int main()
{
    int f;

    printf("Informe um número para ser calculado o seu fatorial: ");
    scanf("%d", &f);

    printf("O fatorial de %d é: %d", f, calcularFatorial(f));

    /*	
    int b, e;
    
    printf("Informe a base e o expoente respectivamente: ");
    scanf("%d %d", &b &e);

    printf("A potência é: ", calcularPotencia(b, e));
    */

    return 0;
}
