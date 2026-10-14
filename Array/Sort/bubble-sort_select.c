#include <stdio.h>

void show_all(int *);
void bbsort(int *);
int N;

int main(){
    
    printf("Enter Max number: "); scanf("%i",&N);
    int number[N];
    printf("Enter the number to sort %i times\n",N); 
    for(int i = 0; i < N; i++){
        printf("Enter number%i: ",i+1); scanf("%i",&number[i]);
    }
    printf("Before sort: ");
    show_all(number);
    bbsort(number);
    printf("\nAfter sort: \n");
    show_all(number);
    return 0;
}

void bbsort(int *a){
    int temp;
    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < N - 1; j++){
            if(a[i]>a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
}

void show_all(int *b){
    for(int i = 0; i < N; i++){
        printf("%i ",b[i]);
    }
}