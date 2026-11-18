#include <stdio.h>

int calculateChecksum(int transactionID) {
    // Base case: if the number is a single digit, return it
    if (transactionID < 10) {
        return transactionID;
    }
    
    // Sum the digits of the current number
    int sum = 0;
    int temp = transactionID;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    
    // Recursively call with the sum until a single-digit value is obtained
    return calculateChecksum(sum);
}

int main() {
    int id = 9875;
    printf("Transaction ID: %d\n", id);
    printf("Digital Root (Checksum): %d\n", calculateChecksum(id));
    return 0;
}
