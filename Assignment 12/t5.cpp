#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int charType(char ch) {
    if (ch >= 65 && ch <= 90) {
        return 1;
    } else if (ch >= 97 && ch <= 122) {
        return 2;
    } else if (ch >= 48 && ch <= 57) {
        return 3;
    } else {
        return 4;
    }
}

float getSimilarity(char *pat, char *pass) {
    int len1 = strlen(pat);
    int len2 = strlen(pass);
    int smaller = (len1 < len2) ? len1 : len2;
    int larger = (len1 > len2) ? len1 : len2;

    if (larger == 0) {
        return 100.0;
    }

    int same = 0;
    for (int i = 0; i < smaller; i++) {
        if (charType(pat[i]) == charType(pass[i])) {
            same++;
        }
    }

    return ((float)same / larger) * 100.0;
}

int main() {
    int numUsers;
    char input[100];

    printf("Enter number of participants: ");
    scanf("%d", &numUsers);

    char **guesses = (char **)malloc(numUsers * sizeof(char *));
    float *results = (float *)malloc(numUsers * sizeof(float));
    if (guesses == NULL || results == NULL) {
        return 1;
    }

    printf("Enter target pattern: ");
    scanf("%s", input);
    char *target = (char *)malloc((strlen(input) + 1) * sizeof(char));
    strcpy(target, input);

    int best = 0;
    for (int i = 0; i < numUsers; i++) {
        printf("Participant %d password: ", i + 1);
        scanf("%s", input);

        guesses[i] = (char *)malloc((strlen(input) + 1) * sizeof(char));
        strcpy(guesses[i], input);

        results[i] = getSimilarity(target, guesses[i]);

        if (results[i] > results[best]) {
            best = i;
        }
    }

    printf("\nResults:\n");
    for (int i = 0; i < numUsers; i++) {
        printf("Participant %d (%s): %.2f%%\n", i + 1, guesses[i], results[i]);
    }

    printf("\nBest match: %s (%.2f%%)\n", guesses[best], results[best]);

    free(target);
    for (int i = 0; i < numUsers; i++) {
        free(guesses[i]);
    }
    free(guesses);
    free(results);

    return 0;
}
