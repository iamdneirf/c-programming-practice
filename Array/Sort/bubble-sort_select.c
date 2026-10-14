#include <stdio.h>
int main(){
    int N;
    printf("Enter Max number: ",&N);
    int number[N];
    for(int i = 0; i < N; i++){
        printf("Enter the number to sort %i times\n",N); 
        printf("Enter number%i: ",i+1); scanf("%i",number[i]);
    }
}