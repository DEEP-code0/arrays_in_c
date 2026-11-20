//12. Insert a new number at the beginning of the array
#include <stdio.h>

int main() {
     
    int n, newNum, i;

    printf("Enter number of elements (max 99): ");
    scanf("%d", &n);

    int arr[n];

    if (n < 0 || n >= 100) {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new number to insert at the beginning: ");
    scanf("%d", &newNum);

    for (i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = newNum;
    n++;

    
    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

