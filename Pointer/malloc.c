#include <stdio.h>
#include <stdlib.h>

int main(){
    int N = 0;
    printf("Enter the MAX student: "); scanf("%i",&N);
    float *score = (float*) malloc(N * sizeof(float));
    
    if(score == NULL){
        printf("\nCannot allocate memory\n");
        return 1;
    }

    for(int i = 0; i < N; i++){
        printf("Enter score of %i Student: ",i+1);
        scanf("%f",&score[N]);
    }
}