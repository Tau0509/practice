#include<stdio.h>
void strnCat(char* t, const char* s, int n);
int main(){
    char a[12];
    char b[12];
    scanf("%s", a);
    scanf("%s", b);
    int n;
    scanf("%d", &n);
    strnCat(a, b, n);
    printf("%s",a);
}
void strnCat(char* t, const char* s, int n){
    char* pt = t;
    const char* ps = s;
    int count = 0;

    while (*pt!='\0') { 
        pt++;
    }

    while (*ps && count < n) { 
        *pt = *ps;
        pt++;
        ps++;
        count++;
    }

    *pt = '\0'; 
}