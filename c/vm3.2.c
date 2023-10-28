 #include <stdio.h>
 
 int main(void)
 {   unsigned short a,b;
     scanf("%hu",&a);
    b=((((a&0xf000)>>12)&0xf000)|((a&0x000f)<<12)|(a&0x0ff0));
        printf("%hu",b);
     return 0;
 }