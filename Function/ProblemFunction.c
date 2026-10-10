#include <stdio.h>'
#define N 50
void swap(char *,char *);
void show_messages(char *);

int main(){
    int i,a,b;
    char str[5][N];
    for(int i = 0; i < N;i++){
        printf("Enter message %i: ",i+1); scanf("49%s",str[5][i]);
    }
}

void swap(char *s1,char *s2){
    int i;
    char temp[N];
    temp[N] = s1[N];
    s1[N] = s2[N];
    s2[N] = temp[N];
}

void show_messages(char *s){
    int i;
    
}