

#include<stdio.h>
#include<stdlib.h>

int main(){

    char myword[100];
    char *p1,*p2;

    int control;

    printf("please enter a word: ");
    gets(myword);

    for(p2=myword; *p2; p2++);
    p2--;


    control=1;

    for (p1=myword; control && p1<p2; p1++,p2--)
    {
        if (*p1!=*p2)
        {
            control=0;
        }
        
    }
    if(control)
    {

        printf("you entered word %s palendrom :)",myword);
    }
    else
    {
        printf("you entered word %s is not palendrom :(",myword);
    }
    

    return 0;
}   