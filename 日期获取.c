#include<stdio.h>
int main(void){
    int year,month,day,days;
    int tem,b;
    scanf("%d-%d-%d",&year,&month,&day);
    days=0;
    tem=0;
    for(b=0;b<month;b++){
        switch(b){
            case 2: if(year%4==0||year%400==0){
                tem=29;
            }else{
                tem=28;
            };break;
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: tem=31; break;
            case 4:
            case 6:
            case 9:
            case 11: tem=30; break;
        }
        days=days+tem;
    }
    days=days+day;
    printf("%d",days);
    return 0;
}