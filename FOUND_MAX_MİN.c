

#include<stdio.h>
#include<stdlib.h>
#define csm 10

int main(){

    int max,min;
    int i;
    int dizi[csm];

    printf("please enter to %d number :\n",csm);

    for (i = 0; i < csm; i++)
    {
        scanf("%d",&dizi[i]);
    }   

    max=min=dizi[i];

    for ( i = 0; i < csm; i++)
    {
        if(dizi[i]>max)
        {
            max=dizi[i];
        }
        if(dizi[i]<min)
        {
            min=dizi[i];
        }
    }
    
    printf("MAXIMUM: %d\n",max);
    printf("MINIMUM: %d\n",min);

    return 0;
}