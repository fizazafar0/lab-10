#include <stdio.h>

int main() {
    char name[50];
    int accNum;
    float amount;
    FILE *fptr;

    printf("Enter Customer Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter Account Number: ");
    scanf("%d", &accNum);

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &amount);

    
    fptr = fopen("bank_log.txt", "a");

    
    if(fptr == NULL) {
        printf("Error! File cannot be opened.\n");
        return 1;
    }

    
    fprintf(fptr, "Name: %s | Account: %d | Withdrawal: %.2f\n", name, accNum, amount);

    
    fclose(fptr);

    printf("Transaction saved successfully in bank_log.txt\n");

    return 0;
}