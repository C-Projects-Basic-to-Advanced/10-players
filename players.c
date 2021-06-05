#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 255

typedef struct {
    char name[MAX];
    int life;
    int atk;
    int def;
    int agi;
} player;

int main(){

    FILE *file;
    player p;
    int ans = 1;

    file = fopen("players.txt", "w");

    while (ans==1){

        printf("\nPlayer Name: ");
        read_string(p.name);

        printf("\n Life Points (0-100): ");
        scanf("%i", &p.life);

        printf("\n Attack Points (0-100): ");
        scanf("%i", &p.atk);

        printf("\n Defense Points (0-100): ");
        scanf("%i", &p.def);

        printf("\n Agility Points (0-100): ");
        scanf("%i", &p.agi);

        printf("(1) to continue, (0) to end program - ");
        scanf("%i", &ans);

        fprintf(file,
        "%s;%i;%i;%i;%i\n", p.name, p.life, p.atk, p.def, p.agi);

    }
    
    fclose(file);
    return 0;
}

void read_string(char txt[]){
    fflush(stdin);
    fgets(txt, MAX, stdin);
    if (txt[strlen(txt)-1]=='\n')
        txt[strlen(txt)-1]='\0';
}