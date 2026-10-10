#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char text1[20] = "YOOOO";
    char text2[20] = "BRO";
    char text3 = 'L';
    strcat(text1," ");

    for(int i = 0;i < strlen(text2); i++){
        text2[i] = tolower(text2[i]);
    }
    printf("%s\n",text2);

    for(int i = 0; i < strlen(text2); i++){
        text2[i] = toupper(text2[i]);
    }
    printf("Combine: %s\n",strcat(text1,text2));

    if((strcasecmp(text1,text2)) == 0){
        printf("text1 and text2 is the same word.\n");
    }
    else{
        printf("text1 and text2 isn't the same word.\n");
    }

    return 0;
}