#include <stdio.h>

int main() {
    int n = 10; 
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int x, found = 0;

    
    printf("Mang hien tai: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    
    printf("\nNhap gia tri can tim: ");
    scanf("%d", &x);

    
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d ton tai o vi tri: %d\n", x, i);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }

    return 0;
}

