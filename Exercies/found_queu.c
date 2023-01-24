#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void add(int myarry[],int dizinum,int quequno,int myvalue);

int main(){

    int num,quequ,value;
    int array[num];

    printf("please enter how many number do you want to: \n");
    scanf("%d",&num);

    srand(time(NULL));

    printf("\n");
    printf("This is your result:\n");

    for (int i = 0; i < num; i++)
    {
        array[i]=rand()%100;
        printf("%d.sayi: %d\n",i+1,array[i]);
           
    }

    printf("which quequ do you add to:\n");
    scanf("%d",&quequ);

    printf("please enter your value to add the quequ\n");
    scanf("%d",&value);

    add(array,num,quequ,value);

    return 0;
}


void add(int myarry[],int dizinum,int quequno,int myvalue){

    int i;
    if(quequno<=dizinum+1)
    {
        for (i=dizinum-1; i >=quequno-1; i--)
        {
            myarry[i+1]=myarry[i];
        }
        myarry[quequno-1]=myvalue;
        printf("this is last of array status\n");

        for (int i = 0; i <= dizinum; i++)
        {
            
            printf("%d.sayi: %d\n",i+1,myarry[i]);
           
        }               
    }
    else
    {
        printf("you entered false value");
    }

}