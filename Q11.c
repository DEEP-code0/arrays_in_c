//11. Shift all nos. by given n positions withın an array of 10 elements either on left side or right side. Pad the remaining position with 0

#include <stdio.h>

int main() {
    int arr[10];
    int n, dir, i;

    // Input 10 elements
    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to shift (n): ");
    scanf("%d", &n);

    printf("Enter direction (1 for Left, 2 for Right): ");
    scanf("%d", &dir);

    if (n >= 10) {
        for (i = 0; i < 10; i++) {
            arr[i] = 0;
        }
    } 
    else if (dir == 1) {
        
        for (i = 0; i < 10 - n; i++) {
            arr[i] = arr[i + n];
        }
        
        for (i = 10 - n; i < 10; i++) {
            arr[i] = 0;
        }
    } 
    else if (dir == 2) {
        for (i = 9; i >= n; i--) {
            arr[i] = arr[i - n];
        }
        for (i = 0; i < n; i++) {
            arr[i] = 0;
        }
    } 
    else {
        printf("Invalid direction choice!\n");
        return 1;
    }

    printf("\nShifted array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}



