#include <string.h>
#include <stdio.h>

int main() {
    int C;
    
    scanf("%d", &C);

    for(int i = 0; i < C; i++) {
        char rajesh[11], sheldon[11];

        scanf("%s %s", rajesh, sheldon);

        if(!strcmp(rajesh, sheldon)) {
            printf("empate\n");
        }
        else if(
            (strcmp(rajesh, "pedra") == 0 && (strcmp(sheldon, "tesoura") == 0 || strcmp(sheldon, "lagarto") == 0)) ||
            (strcmp(rajesh, "papel") == 0 && (strcmp(sheldon, "pedra") == 0 || strcmp(sheldon, "spock") == 0)) ||
            (strcmp(rajesh, "tesoura") == 0 && (strcmp(sheldon, "papel") == 0 || strcmp(sheldon, "lagarto") == 0)) ||
            (strcmp(rajesh, "lagarto") == 0 && (strcmp(sheldon, "papel") == 0 || strcmp(sheldon, "spock") == 0)) ||
            (strcmp(rajesh, "spock") == 0 && (strcmp(sheldon, "tesoura") == 0 || strcmp(sheldon, "pedra") == 0))
        ) {
            printf("rajesh\n");
        }
        else {
            printf("sheldon\n");
        }
    }

    return 0;
}