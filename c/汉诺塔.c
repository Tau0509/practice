//
// Created by tau on 2023/12/18.
//
#include <stdio.h>
void hannuota(int n,char a,char b,char c){
    if(n==1){
        printf("%c->%c \n",a,b);
    }else{
        hannuota(n-1,a,c,b);
        printf("%c->%c \n",a,b);
        hannuota(n-1,c,b,a);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    hannuota(n,'a','b','c');
}