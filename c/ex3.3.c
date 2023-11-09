#include<stdio.h>
#define s(x) (x*x)
int main(){
    int a;
    for(a=100;a<1000;a++){
        if (s(a)%1000==a)
        printf("%d\n",a);
    }
return 0;
}