#include <stdio.h>
#include <string.h> //broo at first Im just forgot this one haha

struct person{
    char fav_anime[30];
    int age;
}p;

int main(){

    FILE *fp;
    fp = fopen("feek2.txt","wb");
    if(fp == NULL){
    printf("\nCannot open file...\n");
    return 0;
    }
    printf("\nOpen file!\n");

    strcpy(p.fav_anime,"Date_alive"); p.age = 17;
    fwrite(&p,sizeof(struct person),1,fp);
    strcpy(p.fav_anime,"Nourin"); p.age = 19;
    fwrite(&p,sizeof(struct person),1,fp);
    strcpy(p.fav_anime,"DragonballZ"); p.age = 30;
    fwrite(&p,sizeof(struct person),1,fp);

    printf("\nSave file!!\n");

    fclose(fp);
    printf("\nClose file...\n");

    printf("\n====Read Binary File====\n");

    int offset = 1*sizeof(struct person);
    printf("Loading INFOMATION...\n");

    fp = fopen("feek2.txt","rb");
    if(fp == NULL){
        printf("\nCannot open FIle...\n");
        return 0;
    }
    printf("\nOpen file..\n\n");
    if(fseek(fp,offset,SEEK_CUR) == 0){ //at first I use "> 0" so Yeah, as yall know its wrong TwT
        /*because I thought if indicator already move it gonna send some thing like 1,2,3,... 
        (In that time im just confusing lol) --> always use "== 0 
        because when it successfully move the indicator it will send "0" */

        if(fread(&p,sizeof(struct person),1,fp)){
            printf("Favourite_Anime: %s\n",p.fav_anime);
            printf("Age: %i\n",p.age);
        }
    }
    printf("\nRead already :D\n");

    fclose(fp);
    printf("\nClose the file....see ya\n");

    return 0;
}