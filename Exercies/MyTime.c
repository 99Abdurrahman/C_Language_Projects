

#include<stdio.h>
#include<stdlib.h>
void mytime(int second);
int main(){

    int second;
    printf("please enter your second:\n");
    scanf("%d",&second);

    mytime(second);

    return 0;
}

void mytime(int second){


    int day,hour,minute,sn,time,new_time;

    day=second/216000;
    time=second%216000;
    hour=time/3600;
    new_time=time%3600;
    minute=new_time/60;
    sn=new_time%60;


    printf("%d:%d:%d:%d  day/hour/minute/second",day,hour,minute,sn);


}