/**
 * count_vowels - Counts the number of vowels (both lowercase and uppercase) in a given string.
 * @str: The input string to count vowels from.
 *
 * Return: The count of vowels in the string.
 *
 * Description: This function takes a null-terminated string as input and counts the occurrences
 * of vowels (a, e, i, o, u, A, E, I, O, U) within the string. It returns the total count of vowels found.
 */

int count_vowels(char *str) {
	char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	int counter = 0;

	while (*str != '\0') {
		for (int i = 0; i < 10; i++) {
			if (*str == vowels[i]) {
				counter++;
				break;
      			} 
		}
		str++;
	}

	return counter;
}	
