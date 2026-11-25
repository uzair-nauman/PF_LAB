#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int containsDigit(char *str) {
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
            return 1;
        }
        str++;
    }
    return 0;
}

int onlyLetters(char *str) {
    if (*str == '\0') {
        return 0;
    }
    while (*str != '\0') {
        if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))) {
            return 0;
        }
        str++;
    }
    return 1;
}

int main() {
    int n;
    char buf[100];

    printf("Enter number of usernames: ");
    scanf("%d", &n);

    char **names = (char **)malloc(n * sizeof(char *));
    if (names == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Username %d: ", i + 1);
        scanf("%s", buf);

        names[i] = (char *)malloc((strlen(buf) + 1) * sizeof(char));
        strcpy(names[i], buf);
    }

    int kept = 0;
    for (int i = 0; i < n; i++) {
        if (containsDigit(names[i])) {
            free(names[i]);
        } else {
            names[kept] = names[i];
            kept++;
        }
    }

    printf("\nFiltered usernames:\n");
    for (int i = 0; i < kept; i++) {
        if (onlyLetters(names[i])) {
            printf("%s\n", names[i]);
        }
    }

    for (int i = 0; i < kept; i++) {
        free(names[i]);
    }
    free(names);

    return 0;
}
