#include<stdio.h>
#include<stdlib.h>
#define csm 10


int main(){


    int i,j;

    printf("\n-----------Table of multiplaction-----------");
    printf("\n");
    printf("%4c",'I');

    for(i=1; i<csm+1; i++)
    {   
        printf("%4d",i);

    }
    printf("\n");
    printf("----");
    for (i = 0; i < csm; i++)
    {
        printf("----");
    }
    printf("\n");

    for (i = 1; i < csm+1; i++)
    {
        printf("%4d",i);
        for (j = 1; j < csm+1; j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }
    
    return 0;
}