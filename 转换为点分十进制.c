#include<stdio.h>
int main(){
    unsigned int x,a,b,c,d;
    while(scanf("%u",&x)!=EOF){
        a=(x&0xff000000)>>24;
        b=(x&0x00ff0000)>>16;
        c=(x&0x0000ff00)>>8;
        d=(x&0x000000ff);
        printf("%u.%u.%u.%u",a,b,c,d);

    }
return 0;
}