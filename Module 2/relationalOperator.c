#include<stdio.h>
int main (){
    int a=10, b=20;
    int sum,sub,mul,mod;
    float divi;
    sum =a+b;
    sub =a-b;
    mul =a*b;
    mod =a%b;
    divi =(float)a/b;
    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%d\n",mul);
    printf("%d\n",mod);
    printf("%.2f\n",divi);
    return 0;
}