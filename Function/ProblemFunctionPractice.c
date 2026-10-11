#include <stdio.h>
#define N 50
void swap(char *,char *);
void show_messages(char *);

int main(){
    int i,a,b;
    char str[5][N];
    for(i = 0; i < 5; i++){
        printf("Enter message %i : ",i+1); gets(str[i]);
    }

    while(1){
        show_messages(str);
        printf("Which text do you want to swap? (a-b) : \n"); scanf("%i-%i",&a,&b);
        if(a < 0 || a > 5 || b < 0 || b > 5){
            break;
        }
        swap(str[a-1],str[b-1]); //minus 1 because array start at 0
    }

    printf("\nEND PROGRAM\n");
    return 0;
}

void show_messages(char *s){
    for(int i = 0; i < 5; i++){
        printf("Message %i : %s\n",i+1,s + (i * N));
    }
}

void swap(char *str1,char *str2){
    int i;
    char temp[N];
    for(i = 0; i < N; i++){
        temp[i] = str1[i];
        str1[i] = str2[i];
        str2[i] = temp[i];
    }
}