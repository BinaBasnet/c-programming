#include<stdio.h>
int main()
{
    float marks;
    printf("enter marks:");
    scanf("%f",&marks);

    if(marks > 90){
        printf("A+\n");
}
else if (marks > 80 && marks <90){
    printf("A\n");
}
else if(marks > 70 && marks < 80){
    printf("B+\n");
}
else{
    printf("B\n");
}
return 0;
}