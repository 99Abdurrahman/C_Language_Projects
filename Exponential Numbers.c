#include<stdio.h>
#include<stdlib.h>

int us_alma(int taban, int us){

    int i;
    int sonuc=1;

    

    for(int i=1; i<=us; i++)
    {

        sonuc=taban*sonuc;

    }

    return sonuc;
}


int main(){


    int a,b;

    printf("please enter two numbers: \n");
    scanf("%d %d",&a,&b);

    printf("%d^%d= %d",a,b,us_alma(a,b));
    return 0;

}