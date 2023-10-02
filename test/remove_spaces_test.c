#include "../main.h"
#include <stdio.h>

int main(void) {
	char str1[] = "Hello, World! How are you?";
	char str2[] = " ";
	char str3[] = "cat ";

	remove_spaces(str1);
	remove_spaces(str2);
	remove_spaces(str3);

	printf("%s$\n%s$\n%s$\n", str1, str2, str3);

	return 0;
}
