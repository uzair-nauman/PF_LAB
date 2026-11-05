#include <stdio.h>
#include <ctype.h>

float calculateDiscount(char membership, float cartTotal) {
    float rate;

    switch (toupper((unsigned char)membership)) {
        case 'P': rate = 0.20f; break;
        case 'G': rate = 0.10f; break;
        case 'S': rate = 0.05f; break;
        default: return 0.0f;
    }

    if (cartTotal > 10000.0f) {
        rate += 0.02f;
    }

    return cartTotal * rate;
}

float calculateFinalBill(float discountedTotal) {
    float salesTax = discountedTotal * 0.15f;
    float delivery = (discountedTotal <= 5000.0f) ? 300.0f : 0.0f;

    return discountedTotal + salesTax + delivery;
}

int main(void) {
    char membership;
    float cartTotal, savedAmount, afterDiscount, totalBill;

    printf("Membership (P for Platinum, G for Gold, S for Standard): ");
    if (scanf(" %c", &membership) != 1) return 1;

    membership = toupper((unsigned char)membership);
    if (membership != 'P' && membership != 'G' && membership != 'S') {
        printf("Invalid membership type.\n");
        return 1;
    }

    printf("Enter shopping amount (PKR): ");
    if (scanf("%f", &cartTotal) != 1 || cartTotal < 0) {
        printf("Invalid shopping amount.\n");
        return 1;
    }

    savedAmount = calculateDiscount(membership, cartTotal);
    afterDiscount = cartTotal - savedAmount;
    totalBill = calculateFinalBill(afterDiscount);

    printf("\nOriginal amount: PKR %.2f\n", cartTotal);
    printf("Discount: PKR %.2f\n", savedAmount);
    printf("Amount after discount: PKR %.2f\n", afterDiscount);
    printf("Final payable amount: PKR %.2f\n", totalBill);

    return 0;
}
