#include "../main.h"
#include <stdio.h>

int main(void) {
	char str1[] = "Hello, World!"; // Helo, Wrd!
	char str2[] = "19fourty9"; // 19fourty
	char str3[] = "remove the 2 spaces"; // remov th2spac

	remove_str_duplicates(str1);
	remove_str_duplicates(str2);
	remove_str_duplicates(str3);

	printf("%s\n%s\n%s\n", str1, str2, str3);

	return 0;
}
