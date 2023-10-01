#include "../main.h"
#include <stdio.h>

int main() {
        int arr1[8] = {1, 2, 2, 1, 3, 6, 7, 6};
        int arr2[5] = {5, 4, 3, 2, 1};
        int arr3[6] = {1, 1, 1, 1, 1, 1};
        int arr4[7] = {1, 2, 3, 4, 6, 6, 1};

        int size1 = remove_duplicates(arr1, 8); // 5
        int size2 = remove_duplicates(arr2, 5); // 5
        int size3 = remove_duplicates(arr3, 6); // 1
        int size4 = remove_duplicates(arr4, 7); // 5

        printf("%d\n", size1);
        printf("%d\n", size2);
        printf("%d\n", size3);
        printf("%d\n", size4);

        printf("arr1: ");
        // 1 2 3 6 7
        for (int i = 0; i < size1; i++) {
                printf("%d ", arr1[i]);
        }
        printf("\n");

        printf("arr2: ");
        // 5 4 3 2 1
        for (int i = 0; i < size2; i++) {
                printf("%d ", arr2[i]);
        }
        printf("\n");

        printf("arr3: ");
        // 1
	for (int i = 0; i < size3; i++) {
                printf("%d ", arr3[i]);
        }
        printf("\n");

        printf("arr4: ");
        // 1 2 3 4 6
        for (int i = 0; i < size4; i++) {
                printf("%d ", arr4[i]);
        }
        printf("\n");

        return 0;
}
