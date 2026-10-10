#include <stdio.h>

int sum(int,int);

int main(){
    int num1,num2;
    printf("Enter First number: "); scanf("%i",&num1);
    printf("Enter second number: "); scanf("%i",&num2);
    
}

int sum(int a,int b){
    int sum;
    sum = a + b;
    return(sum);
}