
#include <stdio.h>
#define N 3 
#define M 4

void capturaMatriz(int m[N][M]);
int buscaMenor(int arreglo[M], int *menor);

int main()
{
  int matriz[N][M];
  int menor,pos,ren;
  
  capturaMatriz(matriz);
  
  for (ren = 0; ren < N; ren++)
  {
      pos = buscaMenor(matriz[ren], &menor);
      
      printf(" el menor del renglon %d es %d y esta en %d", ren, menor, pos);
  }
    return 0;
}

void capturaMatriz(int m[N][M])
{
    int ren, col;
    for(ren = 0; ren < N; ren ++)
    {
        for(col = 0; col < M; col ++)
        {
            printf("Matriz [%d][%d]", ren, col);
            scanf("%d", &m[ren][col]);
        }
    }
}

int buscaMenor(int arreglo[M], int *menor)
{
    int pos = -1;
    int i;
    
    *menor = arreglo[0];
    
    for(i = 0; i < M; i++)
    {
        if(arreglo[i] < *menor)
        {
            *menor = arreglo[i];
            pos = i;
        }
        
    }
    
    return pos;
}
