#include <stdio.h>
#define N 30
FILE *fp;
int number_of_student = 0;
struct student{
    char name[20];
    char surname[20];
    int id;
}s[N];
void input_student_info(int);

int main(){
    char ch;
    int choice;
    fp = fopen("StRecord.txt","rb");
    ch = getc(fp);
    if(fp != NULL){
        if(ch == EOF){
            printf("\nThis file is empty\n");
            fclose(fp);
            input_student_info(1);
        }
        else{
            int i = 0;
            while(fread(s,sizeof(struct student),number_of_student,fp) == 1){
                i++;
            }
            number_of_student = i;
            fclose(fp);
        }
    }
    else{
        input_student_info(0);
    }
    printf("============= MENU =============");
            printf("1. Display all Student\n");
            printf("2. Display specific student by index\n");
            printf("3. Add student\n");
            printf("0. Exit Program");
            printf("Select number : "); scanf("%i",&choice);

            switch (choice)
            {
            case 1:
                
                break;
            case 2:
                break;
            case 3:
                break;
            case 0:
                break;
            default:
                break;
            }
}

void input_student_info(int a){
    if(1){
        printf("Lets add student!\n");
    }
    else{
        printf("creating file....\n");
    }
    fp = fopen("StRecord.txt","wb");
    printf("----------------Student No.%i----------------\n",number_of_student+1);
    printf("Enter name: "); scanf("%s",s[number_of_student].name);
    printf("Enter surname: "); scanf("%s",s[number_of_student].surname);
    printf("Enter ID: "); scanf("%i",&s[number_of_student].id);
    fwrite(s,sizeof(struct student),1,fp);
    fclose(fp);
}