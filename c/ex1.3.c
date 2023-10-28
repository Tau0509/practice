#include<stdio.h>
int isPerfect(int x){
    int y,s;
    for(s=0,y=1;y<=x/2;y++){
        if(!(x%y))
        s+=y;
    }
    if(s==x)
    return 1;
    return 0;
}

int main(){
    int a;
    printf("1000内的完数有：\n");
    for(a=1;a<=1000;a++)
    if(isPerfect(a))
    printf("%d\n",a);
    return 0;
}