#include<stdio.h>
#include<string.h>
#define MAX 60
int main(){
    int flag=0; //用于标记状态
    char a[MAX];
    while(1){
        gets(a);
        for(int i=0;i<=(int)strlen(a);i++){
            if(flag==0){
            if(a[i]==' '){
            flag=1;            //检测到第一个空格则将flag变为1
            printf(" ");
            }
            }
            if(flag==1){ 
                if(a[i]!=' '){      //当flag为1是寻找到非空格元素后将flag变为0，并且输出非空格元素   
                    flag=0;
                    printf("%c",a[i]);
                }
            }else{
                printf("%c",a[i]);
            }

        }
        printf("\n");
        
        if(a[strlen(a)-1]=='!')
        break; 
        memset(a, 0, sizeof a);
    }
    return 0;
}