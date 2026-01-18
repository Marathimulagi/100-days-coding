#include<iostream>
#include<cstdlib>
using namespace std;
void update(int*a,int*b){
    int tempA=*a;
    int tempB=*b;
    
    *a=tempA+tempB;
    if(tempA>tempB){
        *b=tempA-tempB;
    }
    if(tempA<tempB){
        *b=tempB-tempA;
    }
}
    
int main(){
    int a,b;
    
    int *pa=&a;
    int *pb=&b;
    if(scanf("%d %d",&a,&b)==2){
        update(pa,pb);
        
        printf("%d\n%d",a,b);
    }
    
    
    return 0;
}