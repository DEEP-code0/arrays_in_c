//13. Insert a new number at a particular position withın an arry
#include <stdio.h>

int main() {
   
    int n, newNum, pos, i;

    printf("Enter number of elements (max 99): ");
    scanf("%d", &n);

    int arr[n];

    if (n < 0 || n >= 100) {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter the new number to insert: ");
    scanf("%d", &newNum);

    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = newNum;
    n++;

    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
