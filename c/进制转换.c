#include<stdio.h>
#include<math.h>
void zhengshuhuoqu(long a){
    int b[20];
    int i=0;
    while(a!=0){
        b[i]=a%2;
        a/=2;
        i++;
    }
    for(;i>=0;i--){
        printf("%d",b[i]);
    }
}
   void xiaoshuhuoqu(double n)
{
	int i=0;
	if (n == 0) {
		return;
	}
    printf(".");
    for(i=0; i<18; i++)
    {
        if(n*2>1)
        {
            n=n*2-1;
            printf("1");
        }
        else
        {
            n=n*2;
            printf("0");
        }
    }
}
int main(){
    double original;
    scanf("%lf",&original);
    long zhengshu=original/1;
    double xiaoshu=original-zhengshu;
    zhengshuhuoqu(zhengshu);
     xiaoshuhuoqu(xiaoshu);
     return 0;
}