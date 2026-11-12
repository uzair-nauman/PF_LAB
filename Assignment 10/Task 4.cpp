#include <stdio.h>

int main() {
    char customerName[50];
    int accountNumber;
    float withdrawalAmount;
    
    printf("Enter Customer Name: ");
    fgets(customerName, sizeof(customerName), stdin);
    
    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);
    
    printf("Enter Withdrawal Amount: ");
    scanf("%f", &withdrawalAmount);
    
    FILE *fptr = fopen("bank_log.txt", "a");
    
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(fptr, "Customer Name: %s", customerName);
    fprintf(fptr, "Account Number: %d\n", accountNumber);
    fprintf(fptr, "Withdrawal Amount: %.2f\n\n", withdrawalAmount);
    
    fclose(fptr);
    
    printf("Transaction details successfully saved to bank_log.txt\n");
    
    return 0;
}
