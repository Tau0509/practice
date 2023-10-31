#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE_ARRAY 12
void getRandArray(int x[],int xSize){
    int i;
    srand(time(NULL));
    for(i=0;i<xSize;i++){

        x[i]=1+(rand()%100);
    }
}
void sortArray(int x[],int xSize){
    int i,j,insert_Value;
    for(i=1;i<xSize;i++){
     insert_Value=x[i];
     for(j=i-1;j>=0&&x[j]>insert_Value;j--){
        x[j+1]=x[j];
     }
     x[j+1]=insert_Value;
    }  
}
int findSerials(int x[],int xSize){
    int count=0;
    for(int i=0;i<=xSize-2;i++){
        for(int j=i+1;j<=xSize-1;j++){    //变为小于等于，下同
            for(int k=j+1;k<=xSize;k++){
                if((x[i]+x[k])==2*x[j]){
                count++;
                printf("(%d,%d,%d)\n",x[i],x[j],x[k]);}
            }
        }
    }
    printf("%d",count);
    return count;
}

int main(){
    int num[SIZE_ARRAY];
    getRandArray(num,SIZE_ARRAY);
    sortArray(num,SIZE_ARRAY);
    findSerials(num,SIZE_ARRAY);  //删去了无用的变量count
    return 0;
}