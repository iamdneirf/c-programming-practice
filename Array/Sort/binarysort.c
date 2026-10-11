#include <stdio.h>
#define N 10
void bubble_sort(int *);
void show_number(int *);

int main(){
    int number[N] = {4,7,53,1,86,1,23,2,21,0};

    printf("\nbefore sort: ");
    show_number(number);

    bubble_sort(number);

    printf("\nAfer sort: ");
    show_number(number);
}

void bubble_sort(int *n){
    int temp;

    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < N - 1; j++){
            if(n[j] > n[j+1]){
                temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
    }
}

void show_number(int *n){
    for(int i = 0; i < N ; i++){
        printf("%i ",n[i]);
    }
}