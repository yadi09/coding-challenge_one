#include "../main.h"
#include <stdio.h>

int main() {
	// Test Case 1: Rotate by 2 positions
	int arr1[] = {1, 2, 3, 4, 5};
	int size1 = 5;
	int rotation_count1 = 2;
	
	rotate_array(arr1, size1, rotation_count1);

	for (int i = 0; i < size1; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\n");

	// Test Case 2: Rotate by 0 positions (no change)
	int arr2[] = {10, 20, 30, 40, 50};
	int size2 = 5;
	int rotation_count2 = 0;
	
	rotate_array(arr2, size2, rotation_count2);

	for (int i = 0; i < size2; i++) {
		printf("%d ", arr2[i]);
	}

	printf("\n");

	// Test Case 3: Rotate by more than array size
	int arr3[] = {7, 8, 9};
	int size3 = 3;
	int rotation_count3 = 10;

	rotate_array(arr3, size3, rotation_count3);

	for (int i = 0; i < size3; i++) {
		printf("%d ", arr3[i]);
	}

	printf("\n");

	return 0;
}
