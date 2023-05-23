# include<stdio.h>
# include <time.h>
# include <stdlib.h>

int main (){
    //Se definen variables
int filas, columnas;

srand(time(NULL));

//Se pide que el usuario ingrese el tamaño de la matriz
printf("Ingrese el numero de filas:");
scanf("%d", &filas);
printf("Ingrese el numero de columnas:");
scanf("%d", &columnas);
printf ("\n");
int A[2][filas][columnas];


printf("La matriz original es:\n");
for (int j = 0; j < filas; j++)
    {
        for (int k = 0; k < columnas; k++)
        {

            //If para formar la matriz
            if (k+1==columnas)
            {
             A[1][j][k]= rand()%101;
            printf("  %d\n", A[1][j][k]);
            }
            else{
                A[1][j][k]= rand()%101;
            printf("  %d", A[1][j][k]);
            
            }
        }
    }

    printf ("\n");
    printf("La matriz transpuesta es:\n");

    for (int j = 0; j < columnas; j++)
    {
        for (int k = 0; k < filas; k++)
        {
            //If para formar la matriz
            if (k+1==filas)
            {
             A[2][j][k]= A[1][k][j];
            printf("  %d\n", A[2][j][k]);
            }
            else{
            A[2][j][k]= A[1][k][j];
            printf("  %d", A[2][j][k]);
            
            }
        }
    }
    



return 0;
}
