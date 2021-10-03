#include <stdio.h>
#define N 10
void funcion(int arr[N]);
int buscaMenor(int arr[N], int *p);

int main()
{
    int arreglo[N];
    int menor, pos;
    
    funcion(arreglo);
    menor = buscaMenor(arreglo,&pos);
    printf("el numero es %d y la posicion %d",menor, *p);
    return 0;
}

int buscaMenor(int arr[N], int *p)
{
    int i;
    int menor = arr[0];
    
    for(i = 0; i < N; i++)
    {
      if(arr[i] < menor)
      {
        menor = arr[i];
        *p = i; 
      }
        
    }
    
    return menor;

}






void funcion(int arr[N])
{
    int i;
    
    for(i = 0; i <N; i++)
    {
        printf("Arreglo[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}