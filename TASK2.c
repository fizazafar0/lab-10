#include <stdio.h>
#include <string.h>

int main() {
    char names[10][50];
    char temp[50];

    printf("Enter 10 student names:\n");
    for(int i = 0; i < 10; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; 
    }

    
    for(int i = 0; i < 10 - 1; i++) {
        for(int j = 0; j < 10 - i - 1; j++) {

            
            if(strcmp(names[j], names[j+1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }

    printf("\nSorted List (A to Z):\n");
    for(int i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}