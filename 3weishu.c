#include<stdio.h>
int main(){
    int i,j,k;
    for(i=5;i<=8;i++){
        for(j=5;j<=8;j++){
            for(k=5;k<=8;k++){
                if(i!=j&&j!=k&&i!=k){
                    printf("%d\n",i*100+j*10+k);
                }
            }
        }

    }
    return 0;
}