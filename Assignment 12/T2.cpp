#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int count, more, total;
    char temp[500];

    printf("How many feedback entries? ");
    scanf("%d", &count);
    getchar();

    char **list = (char **)malloc(count * sizeof(char *));
    if (list == NULL) {
        return 1;
    }

    for (int i = 0; i < count; i++) {
        printf("Feedback %d: ", i + 1);
        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp, "\n")] = '\0';

        list[i] = (char *)malloc((strlen(temp) + 1) * sizeof(char));
        strcpy(list[i], temp);
    }

    printf("Any more feedback to add? ");
    scanf("%d", &more);
    getchar();

    total = count + more;
    if (more > 0) {
        list = (char **)realloc(list, total * sizeof(char *));
        if (list == NULL) {
            return 1;
        }

        for (int i = count; i < total; i++) {
            printf("Feedback %d: ", i + 1);
            fgets(temp, sizeof(temp), stdin);
            temp[strcspn(temp, "\n")] = '\0';

            list[i] = (char *)malloc((strlen(temp) + 1) * sizeof(char));
            strcpy(list[i], temp);
        }
    }

    int charCount = 0;
    int maxChars = 0;
    char *longestMsg = list[0];

    for (int i = 0; i < total; i++) {
        char *p = *(list + i);
        int len = 0;

        while (*p != '\0') {
            len++;
            charCount++;
            p++;
        }

        if (len > maxChars) {
            maxChars = len;
            longestMsg = *(list + i);
        }
    }

    printf("\nAll Feedback:\n");
    for (int i = 0; i < total; i++) {
        printf("%d. %s\n", i + 1, list[i]);
    }

    printf("\nTotal characters: %d\n", charCount);
    printf("Longest feedback: %s\n", longestMsg);

    for (int i = 0; i < total; i++) {
        free(list[i]);
    }
    free(list);

    return 0;
}
