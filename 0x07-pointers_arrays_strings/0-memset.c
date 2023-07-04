#include <stdio.h>

char* _memset(char* s, char b, unsigned int n) {
	char* ptr = s;
	while (n > 0) {
		*ptr = b;
		ptr++;
		n--;
	}
	return s;
}

int main() {
	char arr[10];
	_memset(arr, 'A', sizeof(arr));

	for (int i = 0; i < sizeof(arr); i++) {
		printf("%c ", arr[i]);
	}
	printf("\n");

	return 0;
}
