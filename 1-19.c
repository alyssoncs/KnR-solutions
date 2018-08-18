#include <stdio.h>

void reverse(char s[])
{
	int len;
	for (len = 0; s[len] != '\0'; len++)
		;

	for (int i = 0; i < len - 1 - i; i++) {
		char aux = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = aux;
	}
}

int main(void) 
{
	char s[100000];

	char c;
	int i = 0;
	while ((c = getchar()), c != EOF) {
		if (c == '\n') {
			s[i] = '\0';
			i = 0;

			reverse(s);
			printf("%s\n", s);
		} else {
			s[i++] = c;
		}
	}

	return 0;
}
