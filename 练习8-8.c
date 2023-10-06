/*将开始三个字母移到最后*/
#include<stdio.h>
#include<string.h>
int main(void){
    char pre[50],tem[6],ans[50];
    int i,a;
    printf("请输入不超过40个字母\n");
    gets(pre);
    a=0;
    while(a<=2){
      tem[a]=pre[a];
      a++;
    };
    puts(tem);
    for(i=3;i<=50;i++){
        if(*(pre+i)!='\0'){
            *(ans+i-3)=*(pre+i);
        }else{
            break;
        }
    }
    strcat(ans,tem);
    puts(ans);
    return 0;

}