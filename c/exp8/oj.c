//
// Created by tau on 2023/12/24.
//
#include <stdio.h>
int main(){
    FILE* a,*b;
    a=fopen("E:\\practice\\c\\exp8\\input.text","r");
    b=fopen("d:\\ans.text","w+");
    int n=1;
    char ch;
    int flag=0;
    fprintf(b,"%03d ",n++);
    while((ch=fgetc(a))!='-'){
        if(ch=='\n')  {flag=1;
            continue;}
        if(flag) {fprintf(b,"\n%03d ",n++);flag=0;}
        fputc(ch,b);

    }

}