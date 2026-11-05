#include <stdio.h>
#include <ctype.h>

void withdraw(float *balance, float amount) {
    if (amount > *balance) {
        puts("Transaction Declined: Insufficient Balance");
        return;
    }

    *balance -= amount;
    puts("Withdrawal successful.");
}

void deposit(float *balance, float amount) {
    *balance += amount;
    printf("Deposit successful. Updated balance: PKR %.2f\n", *balance);
}

int main(void) {
    float accountBalance = 100000.0f;
    float amount;
    char choice;

    printf("Choose transaction: D (debit) or C (credit): ");
    if (scanf(" %c", &choice) != 1) return 1;

    choice = toupper((unsigned char)choice);
    if (choice != 'D' && choice != 'C') {
        puts("Invalid transaction type.");
        return 1;
    }

    printf("Enter amount: ");
    if (scanf("%f", &amount) != 1 || amount <= 0) {
        puts("Invalid amount.");
        return 1;
    }

    if (choice == 'D') {
        withdraw(&accountBalance, amount);
    } else {
        deposit(&accountBalance, amount);
    }

    printf("Final account balance: PKR %.2f\n", accountBalance);
    return 0;
}
