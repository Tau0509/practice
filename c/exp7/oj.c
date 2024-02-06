#include <stdio.h>
#include <stdlib.h>
struct a{
    int num;
    struct a*next;
};
int main(){
    int n,m;
    int cycle=1,out=0;
    scanf("%d%d",&n,&m);
    struct a*head,*head_,*next=NULL;
    head_=malloc(sizeof(struct a));
    head_->num=1;
    head_->next=next;
    head=head_;
    for(int i=2;i<=n;i++){
        next=malloc(sizeof(struct a));
        next->num=i;
        next->next=NULL;
        head->next=next;
        head=head->next;
    }
    next->next=head_;
    head=head_;
    while(1){
        if((cycle)%m==0){
            printf("%d ",head->num);
            next->next=head->next;
            out++;
        }
        head=head->next;
        next=next->next;
        if((n-out)==1) break;
        cycle++;
    }


}