#include <stdio.h>
#define N 50
void swap(char *,char *);
void show_messages(char *);

int main(){
    int i,a,b;
    char str[5][N];
    for(int i = 0; i < 5 ;i++){
        printf("Enter message %i: ",i+1); scanf("%49s",str[5][i]);
    }
    do{

    }while();
}

void swap(char *s1,char *s2){
    int i;
    char temp;
    for(int i = 0; i < N; i++){
    temp = s1[i];
    s1[i] = s2[i];
    s2[i] = temp;
    }
}

void show_messages(char *s){
    int i,swap;
    printf("Which text do you want to swap? (a-b): "); scanf("")
}