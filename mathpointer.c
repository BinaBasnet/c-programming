#include<stdio.h>

void find(int a, int b, int *sum, int *prod, int *avg);

int main() {
        int a = 7, b = 5;
        int sum, product, avg;
        work(a, b, &sum, & product, &avg);
        printf("sum = %d, product = %d, avg = %d\n", sum,product,avg);

    return 0;
}
void work(int a, int b, int *sum, int *product, int *avg) {
   *sum = a+b;
    *product = a * b;
    *avg = (a+b)/2;
}
