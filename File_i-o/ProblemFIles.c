#include <stdio.h>

struct Student{
        char name[30];
        char ID[12];
        int age;
    };

int main(){
    FILE *fp;
    int number,i = 0;
    struct Student s[100];

    fp = fopen("StRecord.dat","rb");
    if(fp == NULL){
        printf("\nCan not open file...\n");
        fp = fopen("StRecord.dat","wb");

        printf("===Creating a StRecord.dat File!===\n");
        printf("Enter number of Student: "); scanf("%i",&number);

        for(int i = 0; i < number; i++){
            printf("\nEnter Student[%i] information\n",i+1);
            printf("Name of student : "); scanf("%29s",s[i].name);
            printf("Student ID      : "); scanf("%11s",s[i].ID);
            printf("Age of student  : "); scanf("%i",&s[i].age);
            //fwrite(&s[i],sizeof(struct Student),1,fp);
            
        }
        fwrite(s,sizeof(struct Student),number,fp);
        fclose(fp);

    }
    else{
        while(fread(&s[i],sizeof(struct Student),1,fp) == 1){ //อ่านทีละคนต้องใส่ Address(RAM memory) TwT 
            i++;
        }
        number = i; //บอกว่ามีกี่คนจากการไป scan อ่านของ fread
        fclose(fp);
    }

    int choice;
    do{
        printf("----------------------------------------------------------\n");
        printf("| %-2s | %-10s | %-30s | %-3s |\n","No","Student ID","Name","Age");
        printf("----------------------------------------------------------\n");
        for(int i = 0;i < number; i++){
            printf("| %-2i | %-10s | %-30s | %-3i |\n",i+1,s[i].ID,s[i].name,s[i].age);
        }
        printf("----------------------------------------------------------\n");
        printf("1. Add Student\n");
        printf("2. Remove Student\n");
        printf("0. End Program\n");
        printf("Please Select Program menu: "); scanf("%i",&choice);

        switch(choice){
            case 1:
                printf("==== Add new Student No.%i ====",number + 1);

                printf("\nEnter Student[%i] information\n",number+1);
                printf("Name of student : "); scanf("%29s",s[number].name);
                printf("Student ID      : "); scanf("%11s",s[number].ID);
                printf("Age of student  : "); scanf("%i",&s[number].age);

                number++;//อย่าลืมว่ามันนับจาก 0,1,2,...

                fp = fopen("StRecord.dat","wb");

                fwrite(s,sizeof(struct Student),number,fp);
                fclose(fp);
                break;
            case 2:
                if(number > 0){
                    int del;
                    printf("Select Student(No.) to delete: ");
                    scanf("%i",&del);

                    if(del >= 1 && del <= number){
                        for(int i = del - 1; i < number - 1; i++){
                            s[i] = s[i+1];
                        }
                        number--;

                        fp = fopen("StRecord.dat","wb");
                        fwrite(s,sizeof(struct Student),number,fp); //ถ้าใส่ทีเดียวไม่ต้องใส่(Hard drive)
                        fclose(fp);
                    }
                    else{
                        printf("\nInvalid Input!\n");
                    }
                }
                else{
                    printf("\nNo student to remove!\n");
                }

                break;
            
        
            case 0:
                printf("\nClose file!\n");
                break;

            default:
                printf("\nInvalid menu!\n");
                break;
        }
    }while(choice != 0);

    return 0;
}
