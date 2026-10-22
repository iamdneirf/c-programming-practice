#include <stdio.h>
#include <string.h>

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
    printf("Enter name of room : "); scanf("%s",name);
    strcpy(my_room.room,name);
    printf("Enter AC status (1 on, 0 off) : "); scanf("%i",&my_room.AcStatus);
    printf("Enter the temperature of the room : "); scanf("%i",&my_room.temperature);

    printf("======== %s ========\n",my_room.room);
    printf("AC Status : %i\n",my_room.AcStatus);
    printf("Current temperature : %i\n",my_room.temperature);
    printf("====================\n");
    
    ChangetempStatus(&my_room);

    printf("\n======== %s ========\n",my_room.room);
    printf("AC Status : %i\n",my_room.AcStatus);
    printf("Current temperature : %i\n",my_room.temperature);
    printf("====================\n");

    return 0;
}