#include<stdio.h>
int judge(int a) {
	int flag = 1;
	for (int i = 2; i <= (a/2) ; i++) {
		if (a % i == 0) {
			flag = 0;
			break;
		}
	}
	return flag;
}
void print(int a) {
	int flag = 0;
	for (int i = 2; i <= a ; i++) {
		for (int j = 2; j <= (a-i) ; j++) {
			if (judge(j)&&judge(i)){
				if (a == i + j) {
					printf("%d=%d+%d\n", a, i, j);
					flag = 1;
					break;
				}
			}
			
		}
		if (flag)
			break;
	}
}
int main() {
	int a;
	while(scanf("%d", &a)!=EOF){
	if (a >= 4) {
		print(a);
	}
    }
		return 0;
}