#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char domain[50];
    
    printf("Enter email address: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';
    
    char *at_ptr = strchr(email, '@');
    
    if (at_ptr == NULL) {
        printf("Invalid Email Format\n");
    } else {
        strcpy(domain, at_ptr + 1);
        printf("Extracted Domain: %s\n", domain);
    }
    
    return 0;
}

