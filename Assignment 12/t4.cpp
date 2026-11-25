#include <stdio.h>
#include <stdlib.h>

void showStats(int *arr, int size) {
    int sum = 0;
    int topIdx = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
        if (arr[i] > arr[topIdx]) {
            topIdx = i;
        }
    }

    float avg = (float)sum / size;

    printf("\nTotal ratings: %d\n", sum);
    printf("Average per category: %.2f\n", avg);
    printf("Highest rated category: Category %d (%d)\n", topIdx + 1, arr[topIdx]);
}

int main() {
    int cats, catNum, updatedVal;

    printf("Enter number of categories: ");
    scanf("%d", &cats);

    int *counts = (int *)malloc(cats * sizeof(int));
    if (counts == NULL) {
        return 1;
    }

    for (int i = 0; i < cats; i++) {
        printf("Ratings for Category %d: ", i + 1);
        scanf("%d", &counts[i]);
    }

    showStats(counts, cats);

    printf("\nWhich category do you want to update (1-%d)? ", cats);
    scanf("%d", &catNum);

    if (catNum >= 1 && catNum <= cats) {
        printf("New rating count for Category %d: ", catNum);
        scanf("%d", &updatedVal);
        counts[catNum - 1] = updatedVal;

        showStats(counts, cats);
    } else {
        printf("Invalid choice.\n");
    }

    free(counts);

    return 0;
}
