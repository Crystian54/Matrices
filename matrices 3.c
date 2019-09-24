#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main (void){
    int tabla[100][100],i2,j2;
    printf("de que dimenciones sera la matriz a trabajar \n");
    printf("numero de filas \n"); scanf("%d",&i2);
    printf("numero de columnas \n");scanf("%d",&j2);

    printf("Escribe los valores de las celdas \n");
    for(int i=0;i<i2;i++){
        for(int j=0;j<j2;j++){
            printf("Celda [%d,%d]\t",i,j);
            scanf("%d",&tabla[i][j]);
        }
    }
    system("cls");
    printf("La matriz generda es: \n");

    for(int i=0;i<i2;i++){
        for(int j=0;j<j2;j++){
            printf("%d \t",tabla[i][j]);
        }
        printf("\n");
    }

    printf("\n");
getch();
return 0;
}

