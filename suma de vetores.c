#include<stdio.h>
#include<conio.h>
#include<math.h>
int main (void){
    int vecA[3],vecB[3],vecC[3];
    printf("Define las componentes de el vector a \n");
    for(int i=0;i<3;i++){
            printf("\n");
        if(i=1) printf("Dame la componente i ="); scanf("%d",&vecA[i]);
        if(i=2) printf("Dame la componente j ="); scanf("%d",&vecA[i]);
        if(i=3) printf("Dame la componente k ="); scanf("%d",&vecA[i]);
    }
    printf("\nDefine las componentes de el vector a \n");
    for(int j=0;j<3;j++){
        printf("\n");
        if(j=1) printf("Dame la componente i ="); scanf("%d",&vecB[j]);
        if(j=2) printf("Dame la componente j ="); scanf("%d",&vecB[j]);
        if(j=3) printf("Dame la componente k ="); scanf("%d",&vecB[j]);
    }
    vecC[0]=vecA[1]+vecB[1];
    vecC[1]=vecA[2]+vecB[2];
    vecC[2]=vecA[3]+vecB[3];
    printf("\n el vector c es =\t");
    for(int a=0;a<3;a++){
     printf("%d \t",vecC[a]);
    }

}
