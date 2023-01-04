#include<stdio.h>
#include<stdlib.h>
#define csm 12


int main(){

    int row;
    int i;
    int j;
    int array[csm][csm];

    printf("please enter a number for row: ");
    scanf("%d",&row);
    

    printf("\n\np");
    for ( i = 0; i < csm; i++)
    {   
        printf("%4d",i);
    }
    printf("\nn\n");

    for ( i = 0; i <=row; i++)
    {
        printf("----");
    }
    printf("\n");

    for (i = 0; i <row; i++)
    {   
        array[i][i]=1;
        array[i][0]=1;

        for (j = 1; j<i; j++)
        {
            array[i][j]=array[i-1][j]+array[i-1][i-1];
        }
    
    }
    for (i = 0; i < row; i++)
    {   
        printf("%d --  ",i);
        for (j = 0; j < i; j++)
        {
            printf("%d  ",array[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;

}