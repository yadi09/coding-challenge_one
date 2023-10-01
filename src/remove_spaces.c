#include <string.h>

/**
 * remove_spaces - Removes spaces from a given string.
 * @str: Pointer to the input string.
 *
 * Description: This function takes a null-terminated string as input and removes all spaces
 * from the string in-place. It modifies the original string to remove spaces.
 * The resulting string will have no spaces, and its length may be shortened.
 *
 */

void remove_spaces(char *str) {
	int len = strlen(str);
	int i = 0;

	for (int j = 0; j < len - 1; j++) {
		if (str[j] == ' ')
			continue;
		str[i] = str[j];
		i++;
	}

	str[i] = '\0';
}
