#include<stdio.h>
#include<math.h>
int main (void){
    int tabla[3][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d",tabla[i][j]);
        }
        printf("\n");
    }
    printf("\n");
return 0;
}
