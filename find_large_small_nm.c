#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int thesmalliest(int A[],int thelarge)
{

    int i,ths;
    ths=A[0];
    for(i=1; i<thelarge; i++)
    {

        if(ths>A[i])
        {
            ths=A[i];

        }
    }
    return ths;


}   

int thelarge(int A[],int thelargenum)
{

    int i ,thl;
    thl=A[0];
    
    for(i=1; i<thelargenum; i++)
    {

        if(A[i]>thl)
        {
            thl=A[i];
        }

    }

    return thl;

}

int main(){

    int n;
    int i;
    int dizi[n];

    printf("how many number will create: \n");
    scanf("%d",&n);
    srand(time(0));


    printf("elemnts of array \n");
    for(i=0; i<n; i++)
    {

        dizi[i]=rand()%100;

        printf("%d\n",dizi[i]);

    }
    printf("the largest=%d\n",thelarge(dizi,n));
    printf("the smalliest=%d\n",thesmalliest( dizi,n));

    return 0;
}