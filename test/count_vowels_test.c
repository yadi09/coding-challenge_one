#include "../main.h"
#include <stdio.h>

int main(void) {
	printf("%d\n", count_vowels("Hello, World!")); // 3
	printf("%d\n", count_vowels("The qUick brOwn fox jumped over the lazy dog")); // 12
	printf("%d\n", count_vowels("COUNT VOWELS")); // 4

	return 0;
}
