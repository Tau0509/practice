#include<stdio.h>
#include<math.h>
double distace(double x1,double y1,double x2,double y2){
    double ans;
    ans=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return ans;
}
int main(void){
    printf("请输入三点坐标(x1,y1),(x2,y2),(x3,y3)\n");
    double x1,y1,x2,y2,x3,y3,l1,l2,l3,area;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    l1=distace(x1,y1,x2,y2);
    l2=distace(x2,y2,x3,y3);
    l3=distace(x1,y1,x3,y3);
    if(l1+l2<=l3||l2+l3<=l1||l1+l3<= l2){
        printf("不可能围成三角形");
    }else{
        double p;
        p=(l1+l2+l3)/2.0;
        area=sqrt(p*(p-l1)*(p-l2)*(p-l3));
        printf("三边长为%lf,%lf,%lf\n",l1,l2,l3);
        printf("此时围成三角形面积为%lf",area);
    }
    return 0;
}