#include<stdio.h>
#include<conio.h>
void Celdas ();//Permite Escribir todas las celdas
void Editar ();//Permite Rescribir una sola celda (cualsea)
void Inicial();//manda ceros a toda la matriz
void Imprimir();//funcion que imprime todo
void menu();//menu el cual permite seleccionar entre los tres primeros void
int tabla[3][4],i,j;
int main (void){
    int op;
    Inicial();
    printf("La matriz generda es: \n");
    Imprimir();
    do{
    printf("\n");
    menu();
    Imprimir ();
    printf("\n");
    printf("quieres efectuar otra operacion \n");
    printf("(1)Si \n(2)No \n"); scanf("%d",&op);
    printf("\n");
    }while(op==1);
getch();
return 0;
}
void Celdas(){
    printf("Escribe los valores de las celdas \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("Celda [%d,%d]\t",i,j);
            scanf("%d",&tabla[i][j]);
        }
    }
    printf("\n");
}
void Editar (){
    int n;
     printf("\t Dame la Celda a Editar \n");
     printf("el valor de la fila \t"); scanf("%d",&i);
     printf("el valor de la clomna \t"); scanf("%d",&j);
     printf("\n Dame el valor Celda (%d,%d)\t",i,j); scanf("%d",&n);
     printf("\n");
     tabla[i][j]=n;
}
void Inicial (){
    int tabla[3][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
}
void Imprimir (){
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d \t",tabla[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void menu(){
    int o;
    printf("\t Modificar la Matriz Generada \n");
    printf(" 1-volver a escribir la matriz \n 2-editar solo una celda\n ");
    scanf("%d",&o);
        switch(o){
            case 1: Celdas(); break;
            case 2: Editar(); break;
            default: printf("no es posible esa opcion\n"); break;
        }
}




