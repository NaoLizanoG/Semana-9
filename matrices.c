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


for (int j = 0; j < filas; j++)
    {
        for (int k = 0; k < columnas; k++)
        {

            //If para formar la matriz
            if (k+1==columnas)
            {
             A[1][j][k]= rand()%101;
            printf(" %d\n", A[1][j][k]);
            }
            else{
                A[1][j][k]= rand()%101;
            printf(" %d", A[1][j][k]);
            
            }
        }
    }



return 0;
}
