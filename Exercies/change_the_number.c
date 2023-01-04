#include<stdio.h>
#include<stdlib.h>


void myfunc(int *nm1, int *nm2)
{

    int tempory;

    tempory=*nm1;
    *nm1=*nm2;
    *nm2=tempory;
    

}

int main(){

    int a=10,b=20;

    printf("before call %d %d\n",a,b);

    myfunc(&a,&b);

    printf("after call %d %d\n",a,b);
    return 0;

}