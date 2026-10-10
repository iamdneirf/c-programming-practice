#include <stdio.h>

long double factorial(int);

int main(){
    int number;
    printf("Enter the number: "); scanf("%i",&number);
    printf("The result of %i! is %.2Lf\n",number,factorial(number));

    return 0;
}

long double factorial(int a){
    long double result = 1;
    for(int i = 1; i <= a; i++){
        result *= i;
    }
    return(result);
}