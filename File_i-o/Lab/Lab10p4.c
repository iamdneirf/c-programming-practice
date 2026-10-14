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
void display_all_student(int);
void display_by_index(int);

int main(){
    char ch;
    int choice;
    fp = fopen("StRecord.txt","rb");
    if(fp != NULL){
        ch = getc(fp);
        if(ch == EOF){
            printf("\nThis file is empty\n");
            fclose(fp);
            input_student_info(1);
        }
        else{
            fseek(fp,0,SEEK_SET);
            int i = 0;
            while(fread(&s[i],sizeof(struct student),1,fp) == 1){ //ไล่อ่านทีละช่อง
                i++;
            }
            number_of_student = i;
            fclose(fp);
        }
    }
    else{
        input_student_info(0);
    }
    do{
    printf("============= MENU =============\n");
            printf("1. Display all Student\n");
            printf("2. Display specific student by index\n");
            printf("3. Add student\n");
            printf("0. Exit Program");
            printf("Select number : "); scanf("%i",&choice);

            switch (choice)
            {
            case 1:
                display_all_student(1);
                break;
            case 2:
                display_by_index(1);
                break;
            case 3:
                input_student_info(1);
                break;
            case 0:
                printf("\nEXIT PROGRAM!\n");
                break;
            default:
                printf("\nInvalid input\n");
                break;
            }
    }while(choice != 0);
    return 0;
}

void input_student_info(int a){
    if(a){
        printf("Lets add student!\n");
    }
    else{
        printf("creating file....\n");
    }
    fp = fopen("StRecord.txt","ab");
    printf("----------------Student No.%i----------------\n",number_of_student+1);
    printf("Enter name: "); scanf("%s",s[number_of_student].name);
    printf("Enter surname: "); scanf("%s",s[number_of_student].surname);
    printf("Enter ID: "); scanf("%i",&s[number_of_student].id);
    fwrite(&s[number_of_student],sizeof(struct student),1,fp);
    fclose(fp);
    number_of_student++;
}

void display_all_student(int a){
    printf("=-=-=-=-=-=- Data =-=-=-=-=-=-\n");
    fp = fopen("StRecord.txt","rb");
    int i = 0;

    while(fread(&s[i],sizeof(struct student),1,fp) == 1){
        printf("No.%-4i %-8s %-8s %-4i\n",i+1,s[i].name,s[i].surname,s[i].id);
        i++;
    }

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    fclose(fp);
}

void display_by_index(int a){
    int select,offset;
    struct student temp;
    printf("Select student by index: "); scanf("%i",&select);
    offset = (select-1)*sizeof(struct student);

    fp = fopen("StRecord.txt","rb");
    if(fseek(fp,offset,SEEK_SET) == 0){
        fread(&temp,sizeof(struct student),1,fp);
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("%-4i. %-8s %-8s %-4i\n",select,s[0].name,s[0].surname,s[0].id);
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    }
    fclose(fp);
}