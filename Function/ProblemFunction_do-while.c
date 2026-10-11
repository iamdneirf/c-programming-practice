#include <stdio.h>
#define N 50
void swap(char *,char *);
void show_messages(char *);

int main(){
    int a,b;
    char str[5][N];
    for(int i = 0; i < 5 ;i++){
        printf("Enter message %i: ",i+1); fgets(str[i],50,stdin);
    }
    do{
        show_messages(str);
        printf("Which text do you want to swap? (a-b): "); scanf("%i-%i",&a,&b);
        if( a < 1 | b < 1 | a > 5 | b > 5){
            break;
        }
        swap(str[a-1],str[b-1]); //minus 1 because array start at [0]

    }while(a >= 1 && b >= 1 && a <=5 && b <=5);
    printf("\nExit Program..\n");

    return 0;
}

void show_messages(char *s){
    for(int i = 0; i < 5 ; i++){
        printf("message %i: %s\n",i+1,s + (i * N));
    }
}

void swap(char *s1,char *s2){
    char temp;
    for(int i = 0; i < N; i++){
    temp = s1[i];
    s1[i] = s2[i];
    s2[i] = temp;
    }
}