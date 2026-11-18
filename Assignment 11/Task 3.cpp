#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float unitPrice;
};

int main() {
    struct Item items[5];
    float totalInventoryValue = 0;
    int searchId, found = 0;

    // Accept details for 5 items from the user
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for item %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &items[i].id);
        printf("Name: ");
        scanf("%s", items[i].name);
        printf("Quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Unit Price: ");
        scanf("%f", &items[i].unitPrice);
    }

    // Calculate total inventory value
    for (int i = 0; i < 5; i++) {
        totalInventoryValue += (items[i].quantity * items[i].unitPrice);
    }
    printf("\nTotal Inventory Value of the Warehouse: %.2f\n", totalInventoryValue);

    // Search for a specific item by its Item ID
    printf("\nEnter Item ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < 5; i++) {
        if (items[i].id == searchId) {
            printf("\n--- Item Found ---\n");
            printf("ID: %d\n", items[i].id);
            printf("Name: %s\n", items[i].name);
            printf("Quantity: %d\n", items[i].quantity);
            printf("Unit Price: %.2f\n", items[i].unitPrice);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Item with ID %d not found in inventory.\n", searchId);
    }

    return 0;
}
