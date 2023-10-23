#include<stdio.h>
int main(void){
    unsigned short x=1, y=2, z=4, mask=0xc3, w;
	short v;
    printf("%d ",(~x&x));
    printf("%d ",(v=~x));
    printf("%d ",(~x^x));
    printf("%d ",(x|y&x|z));
       printf("%d ",(w=y|z, (w<<3)+(w<<1)));
    printf("%d ",(x|(y&x)|z<<y^mask>>x));
    printf("%d ",(-1, v<<=1));
    printf("%d ",(~x|x));
        printf("%d ",(x^~y));
    printf("%d ",(x|y|z>>2));
    return 0;
}