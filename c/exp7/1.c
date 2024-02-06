//
// Created by tau on 2023/12/22.
//
#include<stdio.h>
int main() {
    char u[] = "UVWXYZ";
    char v[] = "xyz";
    struct T {
        int x;
        char c;
        char *t;
    } a[] = {{11,  'A', u},
             {100, 'B', v}}, *p = a;
   printf("%d\n",(++p)->x); //100
   p=a;
   printf("%c\n",(p++,p->c));//B
    p=a;
   printf("%c\n",(*p++->t,*p->t)); //x
    p=a;
   printf("%c\n",*(++p)->t); //x
    p=a;
   printf("%c\n",*++p->t);//V
    p=a;
    a[0].t=u;
   printf("%c\n",++*p->t);//V
}