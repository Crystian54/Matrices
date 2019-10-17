/*3. Desarrollar programa que invierta una cadena de caracteres, la
 cadena de caracteres la captura el usuario.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int MAX=100;
    char texto[MAX];
    int i = 0,j;
    printf("Introduce una texto (maximo %d c): \t",MAX);
    gets(texto);
    printf("\nLa cadena introducida es: %s\n\n",texto);
    while(texto[i]!='\0'){
        i++;
    }
    printf("el texto al reves es :\t");
    for (j=i-1; j>=0; j--){
        printf("%c", texto[j]);
    }
    return 0;
}
