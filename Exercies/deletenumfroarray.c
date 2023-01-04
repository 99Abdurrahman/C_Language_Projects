


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void deletenum(int A[],int quenumber,int sumofnum){


    int i;

    if(quenumber>sumofnum)
    {

        printf("you entered invalid number\n");

    }
    else
    {
        for (i=quenumber-1; i<sumofnum-1; i++)
        {
            A[i]=A[i+1];    
        }
        printf("After deleted your number:\n");
        for (i=0; i<sumofnum-1; i++)
        {
            printf("%d\n",A[i]);
        }
        
    }

}

int main(){

    int n,i,queno;

    printf("please enter a number to create random number: \n");
    scanf("%d",&n);

    int array[n];

    srand(time(0));

    for(i=0; i<n; i++)
    {
        array[i]=rand()%100;
        printf("%d\n",array[i]);
    }

    printf("\n please enter a number to delete a number:\n");
    scanf("%d",&queno);
    
    deletenum(array,queno,n);    

    return 0;
}