#include<stdio.h>

int calcPercentage(int english, int social, int nepali);

int main(){
        int social= 38;
        int english= 86;
        int nepali= 97;

        printf("percentage is : %d", calcPercentage(english,social,nepali));

    return 0;
}
 
int calcPercentage(int english, int social, int nepali){
    return ((english + social+ nepali)/3);
}