#include <stdio.h>
void printArr(int arr[],int n) {
printf("%d,%d,%d,%d %d",n, arr[5], arr[6], arr[sizeof(arr)/sizeof(int)-1],sizeof(arr)/sizeof(int)-1);
}
int main(void){
int arr[] = {27, 28, [4]=31, 29, 31, [5]=30};
printArr(arr,sizeof(arr)/sizeof(int));
return 0;
}