#include <stdio.h>
#include <string.h>

int main() {
    char feedback[500];
    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);
    
    feedback[strcspn(feedback, "\n")] = '\0';
    
    int length = strlen(feedback);
    printf("Total number of characters: %d\n", length);
    
    if (strstr(feedback, "good") != NULL) {
        printf("Sentiment Report: Positive (contains 'good')\n");
    } else if (strstr(feedback, "bad") != NULL) {
        printf("Sentiment Report: Negative (contains 'bad')\n");
    } else {
        printf("Sentiment Report: Neutral\n");
    }
    
    char *pos = strstr(feedback, "bad");
    if (pos != NULL) {
        char temp[500];
        strcpy(temp, pos + 3);
        strcpy(pos, "not good");
        strcat(feedback, temp);
        printf("Sanitized Review: %s\n", feedback);
    } else {
        printf("Updated Review: %s\n", feedback);
    }
    
    return 0;
}

