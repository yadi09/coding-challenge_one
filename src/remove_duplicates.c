/**
 * remove_duplicates - Removes duplicate elements from an integer array.
 *
 * @arr: Pointer to the integer array.
 * @size: The size of the array.
 *
 * Return: The new size of the array after removing duplicates.
 *
 * Description: This function takes an integer array and its size as input and removes duplicate
 * elements from the array. It returns the new size of the array after removing duplicates.
 *
 * The function iterates through the input array, keeping track of a new array without
 * duplicates. It checks each element against the elements already processed and
 * includes only the first occurrence of each element in the new array.
 */

int remove_duplicates(int *arr, int size) {
        int new_size= 0;

        for (int i = 0; i < size; i++) {
                int is_duplicate = 0;

                for (int j = 0; j < new_size; j++) {
                        if (arr[i] == arr[j]) {
                                is_duplicate = 1;
                                break;
                        }
                }

                if (!is_duplicate) {
                        arr[new_size] = arr[i];
                        new_size++;
                }
        }

        return new_size;
}
