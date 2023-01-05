


#include<stdio.h>
#include<stdlib.h>
#define csm 100

void myfunc(int *arr,int N){

    printf("Your Numbers: \n");


    for (int i = 0; i < N; i++)
    {
        
        printf("%d ",*arr);
        arr++;        
    }
}

int main(){ 

    int des_arr[csm];
    int source_arr[csm];
    int N;
    int *source_ptr,*des_ptr,*end_ptr;
    source_ptr=source_arr;
    des_ptr=des_arr;


    printf("please enter how many number do you want for array: \n");
    scanf("%d",&N);

    printf("please enter your numbers\n");
    for (int i = 0; i < N; i++)
    {
        
        scanf("%d",(source_ptr+i));

    }

    end_ptr=&source_arr[N-1];
    
    printf("before source array doesnt copy \n");
    myfunc(source_arr,N);

    while (source_ptr<=end_ptr)
    {
        *des_ptr=*source_ptr;
        des_ptr++;
        source_ptr++;
    }
    printf("\nafter copy my source array \n");
    myfunc(source_arr,N);

    printf("\nafter copy my destinataion array \n");
    myfunc(des_arr,N);
    
    return 0;

}