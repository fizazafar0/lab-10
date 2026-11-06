#include <stdio.h>

int main() {
    int roll;
    char name[50];
    int marks;
    FILE *fptr;

    
    fptr = fopen("marks.txt", "r");

    
    if(fptr == NULL) {
        printf("Error: File Not Found!\n");
        return 1;
    }

    printf("Roll No\t Name\t Marks\n");
    printf("------------------------\n");

    
    while(fscanf(fptr, "%d %s %d", &roll, name, &marks) != EOF) {
        printf("%d\t %s\t %d\n", roll, name, marks);
    }

    
    fclose(fptr);

    return 0;
}