


#include<stdio.h>
#include<stdlib.h>

void myfunc(int row,char chrac){

    int i,j;

    
    for(j=row; j>0; j--){


        for (i = 1; i <= row-j; i++)
        {
            printf(" ");
        }
        for ( i = 1; i <= 2*j-1; i++)
        {
            printf("%c",chrac);
        }

        printf("\n");

    }
    for ( j = 1; j <= row; j++)
    {
        for (i = 1; i <= row-j; i++)
        {
            printf(" ");
        }
        for (i = 1; i <= 2*j-1; i++)
        {
            printf("%c",chrac);
        }
        
        printf("\n");
    }

}


int main(){


    int row;
    char chrac;
    printf("please enter a character for chart: \n");
    scanf("%c",&chrac);

    printf("please enter a number for row: \n");
    scanf("%d",&row);

    printf("\n\n\n");
    myfunc(row,chrac);


    return 0;
}