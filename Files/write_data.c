#include <stdio.h>

struct Person {
    char name[30];
    int age;
};

int main() {
    FILE *fp;
    struct Person person[3];

    // เขียนข้อมูลลงไฟล์
    fp = fopen("INFO.txt", "w");
    if (fp == NULL) {
        printf("Cannot open file");
        getchar();
        return 0;
    }
    printf("Can open file (write)\n");

    for (int i = 0; i < 3; i++) {
        printf("[ID: %i] Enter name and age: ", i + 1);
        scanf("%29s %i", person[i].name, &person[i].age);
        fprintf(fp, "\n[ID %i]\n", i + 1);
        fprintf(fp, "Name: %s, Age: %i", person[i].name, person[i].age);
    }

    fclose(fp);
    printf("\nClose file!\n");
    getchar();

    // อ่านข้อมูลจากไฟล์ที่เพิ่งเขียน
    char ch;
    fp = fopen("INFO.txt", "r");
    if (fp == NULL) {
        printf("Can not open...");
        return 0;
    }

    ch = getc(fp);
    while (ch != EOF) {
        printf("%c", ch);
        ch = getc(fp);
    }

    fclose(fp);
    printf("\nClose file!!\n");

    return 0;
}
