



#include<stdio.h>
#include<stdlib.h>

void chart(int mynum);

void plus(int mynum);
int main(){


    int num;

    printf("please enter a number for the chart: \n");
    scanf("%d",&num);

    chart(num);
    plus(num);

    return 0;
}

void chart(int mynum){

    int i;
    int j;
    int numbofspace=mynum-1;
    for ( i = 1; i <= mynum; i++)
    {

        for ( j = 1; j <=numbofspace; j++)
        {
            printf(" ");

        }
        numbofspace--;
        for (j=1; j<=2*i-1; j++)
        {
            printf("c");
        }
        
        printf("\n");
    }

}

void plus(int mynum){


    int i,j;
    int spcofnum=1;
    for (i = 1; i <=mynum-1; i++)
    {
        
        for (j= 1; j<=spcofnum; j++)
        {
            printf(" ");           
        }
        spcofnum++;
        for (j=1; j<=2*(mynum-i)-1; j++)
        {
            printf("+");      
        }
        printf("\n");
    }

}
    

