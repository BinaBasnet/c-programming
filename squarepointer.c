// swap two numbers using pointers
#include<stdio.h>

void square(int n);
void _square(int *n);
int main() {
        int n = 5;
        square(n);
        printf("number = %d\n",n);

   _square(&n);
   printf("number = %d\n",n);

    return 0;
}
//call by value
void square(int n) {
    n = n*n;
    printf("square= %d\n",n);
}

//call by reference
void _square(int *n) {
    *n = (*n) * (*n);
    printf("square = %d\n",n);
}