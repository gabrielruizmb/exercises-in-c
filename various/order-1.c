#include<stdio.h>

int main()
{
    int size = 0, aux = 0;

    while(size < 1)
    {
        printf("Informe o tamanho do vetor a ser ordenado: ");
        scanf("%d", &size);
	if(size < 1)
	    printf("\nO vetor deve ser maior do que 0!\n");
    }

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Informe o %d° elemento do vetor: ", i+1);
	scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < size; i++)
    {
	for(int j = i+1; j < size; j++)
	{
            if(vetor[i] > vetor[j])
	    {
                aux = vetor[i];
	        vetor[i] = vetor[j];
	        vetor[j] = aux;
	    }
	}
    }

    printf("Segue o vetor ordenado:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d°: %d\n", i+1, vetor[i]);
    }

    return 0;
}
