/*Desarrollar programa que calcule el complemento a uno de un n�mero binario capturado por el usuario, estos
 n�meros se deben almacenar en un arreglo para su representaci�n Considere un registro de 8 bits,
 es decir, cada posici�n del arreglo representa un bit.*/
#include <stdio.h>
#include <conio.h>
int main(){
    int max=8;
    int comp[8];
    int i=0,bit;
    do{
        printf("\nCapture el %d bit\t",i); scanf("%d",&bit);
        while(bit!=0 && bit!=1){
            printf("\nlos bits solo se trabajan en 1 y 0");
            printf("\nvuelve a capturar el %d bit\t",i); scanf("%d",&bit);
        }
        comp[i]=bit;
        i++;

    }while(i<max);
    printf("\nLos numeros capturados son \t");
    for (int j=0;j<max;j++){
           printf("%d ",comp[j]);
    }
    printf("\nLa complementaria es \t\t");
    for (int j=0;j<max;j++){
            if(1==comp[j]){
            comp[j]=0;
            }
            else{
                    comp[j]=1;
            }
            printf("%d ",comp[j]);
    }

    getche();
    return 0;
}
