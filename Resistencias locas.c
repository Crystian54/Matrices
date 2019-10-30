#include<stdio.h>
#include<conio.h>
#include<math.h>
int main (void){
    int i,n,a=1;
    float resis[1000],s1=0,se;
    float pa,s2,in=0;
    printf("Dame el numero de ristencias a calcular \t"); scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Dame la reistencia no %d \t",a); scanf("%f",&resis[i]);
        a++;
    }
    for(i=0;i<n;i++){
        se=resis[i];
        s1=s1+se;

        float b=resis[i];
        pa=(1/resis[i]);
        in=in+pa;
    }
    s2=(1/in);
    printf("\nla suma de resistencias en serie es = %.0f ohms",s1);
    printf("\nla suma de resistencias en paralelo es = %f ohms",s2);
}
