#include <stdio.h>
#define N 10

int busca(int arr[N], int n);

int main()
{
    int arreglo[N];
    int numero, i, posicion;
    
    for(i=0; i < N; i++)
    {
        printf("arreglo[%d]: ", i);
        scanf("%d", &arreglo[i]);
    }
     
    printf("Que numero buscas: ");
    scanf("%d", &numero);
    
    posicion = busca(arreglo, numero);
    
    if(posicion != -1)
      printf("El valor esta en la posicion %d", posicion);
    else
      printf("El numero no existe en el arreglo");
      
    return 0;
}


int busca(int arr[N], int n)
{
    int pos = -1;
    
    for(int i; i<N; i++)
    {
        if(arr[i] == n)
        pos = i;
    }
    return pos;
}
