#include<stdio.h>
int main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);

    if(age>18){
        printf("adult\n");
        printf("can vote\n");
        printf("can drive\n");
    }
    else{
        printf("child");
    }
    return 0;

}