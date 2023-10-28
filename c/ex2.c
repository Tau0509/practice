#include<stdio.h>
#define PI 3.14159
int main( void ){
int f ;
short p, k ;
double c, r, s ;
/* 任务 1 */
printf("Input Fahrenheit: " ) ;
scanf("%d", &f ) ;
c = 5.0/9 * (f-32) ;
printf( "\n %d (F) = %.2lf (C)\n\n", f, c ) ;
/* 任务 2 */
printf("input the radius r:");
scanf("%lf", &r);
s = PI * r * r;
printf("\nThe acreage is %.2lf\n\n",s);
/* 任务 3 */
k =(short) 0xa1b2, p =(short) 0x8432;
int newint = (p&0xff00)|(k>>8&0x00ff);
printf("new int = %#x\n\n",newint);
return 0;
} 