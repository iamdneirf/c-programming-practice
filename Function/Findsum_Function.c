#include <stdio.h>

int sum(int,int);

int main(){
    int num1,num2;
    printf("Enter First number: "); scanf("%i",&num1);
    printf("Enter second number: "); scanf("%i",&num2);
    printf("%i + %i --> total is %i\n",num1,num2,sum(num1,num2));

    return 0;
}

int sum(int a,int b){
    int sum;
    sum = a + b;
    return(sum);
}