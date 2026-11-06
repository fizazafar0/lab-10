#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char domain[100];
    char *pos;

    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    
    pos = strchr(email, '@');

    if(pos == NULL) {
        printf("Invalid Email Format\n");
    } else {
        
        strcpy(domain, pos + 1);
        printf("Domain: %s\n", domain);
    }

    return 0;
}