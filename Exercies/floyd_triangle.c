




// calcute floyd trinagle 

#include<stdio.h>
#include<stdlib.h>

void trifloyd(int n);

int main(){

    int row;
    printf("please enter a row for flod triangle: \n");
    scanf("%d",&row);

    trifloyd(row);
    
    return 0;

}

void trifloyd(int n){

    int j;
    int a=1;
    int i=1;

    while (i<=n)
    {
        
        j=1;
        while (j<i)
        {   
            printf("%3d",a);
            a++;
            j++;     
        }
        
        printf("\n");
        i++;
    }
    
}