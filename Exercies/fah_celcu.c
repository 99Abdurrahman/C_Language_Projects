

#include<stdio.h>
#include<stdlib.h>

float frmtoc(float f){

    return (0.5555)*(f-32);


}

float frmtof(float c){

    return ((1.8*c)+32); 


}

int main(){

    float f,c;
    int option;

    printf("for  F den C choose (1)\n");
    printf("for  C den F choose (2)\n");

    printf("please enter your option: \n");
    scanf("%d",&option);

    if (option==1)
    {
        printf("please enter F value: \n");
        scanf("%f",&f);
        printf("from F: %.2f to C: %.2f ",f,frmtoc(f));
    }
    else if (option==2)
    {
        printf("please enter C value: \n");
        scanf("%f",&c);
        printf("from C: %.2f to f: %.2f ",c,frmtof(c));
    }
    else
    {
        printf("you enterd invalid value");

    }

    return 0;
}