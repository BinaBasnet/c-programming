#include<stdio.h>
int main() {
    int a,b,c;
    a=1028;
    b=8;
    c = a;
    a = b;
    b = c;
    printf("a = %d, b = %d\n",a,b);
    return 0;
}