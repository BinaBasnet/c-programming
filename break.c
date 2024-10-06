#include<stdio.h>
int main()
{
    int n;
    do{
        printf("enter number: ");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n %3 == 0){
            break;
        }

        }while(1);
        printf("odd");
        return 0;
}