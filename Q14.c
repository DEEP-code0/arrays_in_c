//14. Insert a new number at a last position within an array.
#include <stdio.h>

int main() {
    int arr[100];
    int n, newNum, i;

    printf("Enter number of elements (max 99): ");
    scanf("%d", &n);

    if (n < 0 || n >= 100) {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new number to insert at the last position: ");
    scanf("%d", &newNum);

    arr[n] = newNum;
    n++;

    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
