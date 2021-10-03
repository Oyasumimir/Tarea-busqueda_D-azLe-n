#include <stdio.h>
#define N 10
void funcion(int arr[N]);
int buscaMayor(int arr[N], int *p);
int main()
{
    int arreglo[N];
    int mayor,pos;

    funcion(arreglo);
    mayor = buscaMayor(arreglo, &pos);
    
    printf("El numero mayor es %d\n Y se encuentra en %d",mayor, pos);
    return 0;
}

int buscaMayor(int arr[N], int *p)
{
    int m = arr[0];
    int i;
    
    for(i = 0; i < N; i++)
    {
        if(arr[i] > m)
        {
            m = arr[i];
            *p = i;
        }
    }
    
    return m;
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