#include <stdio.h>
struct room{
    char room[20];
    int temperature;
    int AcStatus;
};

void ChangetempStatus(struct room *p){
    if(p->AcStatus != 1){
        p->AcStatus = 1;
    }
    else{
        p->AcStatus = 0;
    }
    p->temperature = 25;
}

int main(){
    struct room my_room;
    char name[20];
    printf("Enter name of room: "); scanf("%s",name);
    strcpy(my_room.room,name);
    my_room.temperature = 30;
    my_room.AcStatus = 0; // 0 mean off , 1 mean on

    printf("======== %s ========\n",my_room.room);
    printf("AC Status : %i\n",my_room.AcStatus);
    printf("Current temperature : ");
    
    ChangetempStatus(&my_room);

    printf("======== %s ========\n",my_room.room);
    printf("AC Status : %i\n",my_room.AcStatus);
    printf("Current temperature : ");
}