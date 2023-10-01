/**
 * reverse_array - Reverses the elements of an integer array in-place.
 * @arr: Pointer to the integer array.
 * @size: The size of the array.
 *
 * Description: This function takes an integer array and its size as input and reverses the
 * order of elements in the array in-place. After execution, the elements in the
 * array will be reversed.
 */

void reverse_array(int *arr, int size) {
	for (int i = 0; i < size - 1; i++) {
		int temp = arr[i];
		arr[i] = arr[size - 1];
		arr[size - 1] = temp;

		size--;
	}
}

/**
 * rotate_array - Rotates the elements of an integer array to the right by a given count.
 * @arr: Pointer to the integer array.
 * @size: The size of the array.
 * @rotation_count: The number of positions to rotate the array to the right.
 *
 * Description: This function takes an integer array, its size, and a rotation count as input
 * and rotates the elements of the array to the right by the specified count.
 * The function performs the rotation in-place.
 */

void rotate_array(int* arr, int size, int rotation_count) {
	rotation_count = rotation_count % size;

	reverse_array(arr, size);
	reverse_array(arr, rotation_count);
	reverse_array(arr + rotation_count, size - rotation_count);
}
