

#include<stdio.h>
#include<stdlib.h>

void fibonaci(int n);
int main(){
    
    int num;
    printf("please enter a number for fibonaci: \n");
    scanf("%d",&num);


    fibonaci(num);

    return 0;

}

void fibonaci(int n){
    
    int first,second,others,i;
    printf("entered numbers for fibonaci: \n");

    first=0;
    second=1;

    for(i=0; i<n; i++)
    {
        if(i<=1)
        {
            others=i;
        }
        else
        {
            others=first+second;

        first=second;
        second=others;
        }
        printf("%d\n",others);

    }
}