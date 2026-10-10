#include <stdio.h>

long double factorial(int);

int main(){
    int number;
    printf("Enter the number: "); scanf("%i",&number);
}

long double factorial(int a){
    long double result = 1;
    for(int i = 1; i <= a; i++){
        result *= i;
    }
    return(result);
}