
#include<stdio.h>
using namespace std;

class cube{
    public:
     void setL(int l){
         m_w=l;
     }
     int showl(){
         return m_l;
    }
     void setw(int w){
         m_w=w;
     }
     int showw(){
         return m_w;
    } void seth(int h){
         m_h=h;
     }
     int showh(){
         return m_h;
    }
    
    private:
    int m_l,m_w,m_h;
};
int main(){
    cube c1;
    c1.setL(3);
    c1.seth(3);
    c1.setw(4);
 printf("%d",c1.showh());
    return 0;
}
