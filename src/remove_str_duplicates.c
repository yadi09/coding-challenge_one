#include <string.h>

/**
 * remove_str_duplicates - Removes duplicate characters from a given string.
 * @str: Pointer to the input string.
 *
 * Description: This function takes a null-terminated string as input and removes duplicate
 * characters from the string in-place. It modifies the original string to remove
 * duplicates, keeping only the first occurrence of each character. The resulting
 * string will have no duplicate characters, and its length may be shortened.
 */

void remove_str_duplicates(char *str) {
	int len = strlen(str);
	int index = 0;

	for (int i = 0; i < len; i++) {
		int is_duplicate = 0;

		for (int j = 0; j < index; j++) {
			if (str[i] == str[j]) {
				is_duplicate = 1;
				break;
			}
		}

		if (!is_duplicate) {
			str[index] = str[i];
			index++;
		}
	}

	str[index] = '\0';
}
