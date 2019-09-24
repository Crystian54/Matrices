/*Rellenar celdas de manera directa*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main (void){
    int tabla[3][4];//declaramos numero de filas y culumnas respectivamente
    printf("Escribe los valores de las celdas \n");
    //primer for solo efectuara las filas
    // segundo for efectuara solo las columnas
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("Celda [%d,%d]\t",i,j);//rellenamos con respeto a la posision
            scanf("%d",&tabla[i][j]);//alaacenamos en la tabla
        }
    }
    system("cls");
    printf("La matriz generda es: \n");
//este for es similar al otro, soslo que aqui solo se imprimiran lso valores
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d \t",tabla[i][j]);
        }
        printf("\n");
    }

    printf("\n");
getch();
return 0;
}
