

#include<stdio.h>
#include<stdlib.h>
#define csm 10

int main(){

    int max,min;
    int i;
    int array[csm];

    printf("please enter to %d number :\n",csm);

    for (i = 0; i < csm; i++)
    {
        scanf("%d",&array[i]);
    }   

    max=min=array[i];

    for ( i = 0; i < csm; i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    
    printf("MAXIMUM: %d\n",max);
    printf("MINIMUM: %d\n",min);

    return 0;
}