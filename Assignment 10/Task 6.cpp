#include <stdio.h>
#include <string.h>

int main() {
    char inputUser[50];
    char inputPass[50];
    char fileUser[50];
    char filePass[50];
    
    printf("Enter Username: ");
    scanf("%s", inputUser);
    
    printf("Enter Password: ");
    scanf("%s", inputPass);
    
    FILE *fptr = fopen("credentials.txt", "r");
    
    if (fptr == NULL) {
        printf("Error: File Not Found!\n");
        return 1;
    }
    
    fscanf(fptr, "%s %s", fileUser, filePass);
    fclose(fptr);
    
    if (strcmp(inputUser, fileUser) == 0 && strcmp(inputPass, filePass) == 0) {
        printf("Access Granted!\n");
    } else {
        printf("Access Denied!\n");
    }
    
    return 0;
}
