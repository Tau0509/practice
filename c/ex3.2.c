#include<stdio.h>
int pailieshu(int i,int j){
    if(j==0){
        return 1;
    }
    return (pailieshu(i,j-1)*(i-j+1)/j);
}
int main(){
    int N;
    int j,i;
    scanf("%d",&N);
    for(i=0;i<=N;i++){
        for(int tem=1;tem<=N+2*(N-i);tem++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            if(pailieshu(i,j)/10==0){
                printf("%d   ",pailieshu(i,j));
            }else if(pailieshu(i,j)){
                printf("%d  ",pailieshu(i,j));
            }else{
                printf("%d ",pailieshu(i,j));
            }
        }
        printf("\n");
    }
    return 0;
}