#include <stdio.h>
#include <string.h>

int main() {
    char feedback[200];
    char updated[300];
    char temp[200];

    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);
 feedback[strcspn(feedback, "\n")] = '\0';
int length = strlen(feedback);
    printf("\nTotal characters: %d\n", length);
 if (strstr(feedback, "bad") != NULL) {
        printf("Sentiment: Negative\n");
  char *pos = strstr(feedback, "bad");
        int index = pos - feedback; 
        updated[0] = '\0'; 
 strncat(updated, feedback, index); 
        strcat(updated, "not good"); 
  strcpy(temp, pos + 3); 
        strcat(updated, temp);
        printf("Updated Review: %s\n", updated);
 } else if (strstr(feedback, "good") != NULL) {
        printf("Sentiment: Positive\n");
        printf("Updated Review: %s\n", feedback);
    } else {
        printf("Sentiment: Neutral\n");
        printf("Updated Review: %s\n", feedback);
    }

    return 0;
}