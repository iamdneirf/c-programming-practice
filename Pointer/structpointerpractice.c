#include <stdio.h>
struct room{
    char room[20];
    int temperature;
    int AcStatus;
};

void ChangetempStatus(struct room *p){

}

int main(){
    struct room my_room;
    char name[20];
    printf("Enter name of room: "); scanf("%s",name);
    strcpy(my_room.room,name);
    my_room.temperature = 30;
    my_room.AcStatus = 0; // 0 mean off , 1 mean on

    printf("======== %s ========\n",my_room.room);
    printf("AC Status : %i",my_room.AcStatus);
    printf("")
    ChangetempStatus(&my_room);
}