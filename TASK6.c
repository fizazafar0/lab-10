#include <stdio.h>
#include <string.h>

int main() {
    char user[50], pass[50];
    char fileUser[50], filePass[50];
    FILE *fptr;

    printf("Enter Username: ");
    fgets(user, sizeof(user), stdin);
    user[strcspn(user, "\n")] = '\0';

    printf("Enter Password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = '\0';

    
    fptr = fopen("credentials.txt", "r");

    if(fptr == NULL) {
        printf("Error: File Not Found!\n");
        return 1;
    }

    
    fgets(fileUser, sizeof(fileUser), fptr);
    fileUser[strcspn(fileUser, "\n")] = '\0';

    fgets(filePass, sizeof(filePass), fptr);
    filePass[strcspn(filePass, "\n")] = '\0';

    fclose(fptr);

    
    if(strcmp(user, fileUser) == 0 && strcmp(pass, filePass) == 0) {
        printf("Access Granted!\n");
    } else {
        printf("Access Denied!\n");
    }

    return 0;
}