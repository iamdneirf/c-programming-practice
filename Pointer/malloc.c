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

    float sum = 0.0;

    for(int i = 0; i < N; i++){
        printf("Enter score of %i Student: ",i+1);
        scanf("%f",&score[N]);
        sum += score[i];
    }

    for(int i = 0; i < N; i++){
        printf("Score of %i Student is %f\n",i+1,score[i]);
    }
    printf("Mean : %f",(sum / N));
    return 0;
}