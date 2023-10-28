#include<stdio.h>
int judge(int num){
    int i,a;
    for(i=2;i<=(num)/2+1;i++){
        if(num%i==0){
            a=0;
            break;
        }else{
            a=1;
        }
    }
    return a;
}
int main(void){
    int i;
    for(i=2;i<100;i++){
        if(judge(i)==1){
            printf("%d\n",i);
        }
    }
    return 0;
}