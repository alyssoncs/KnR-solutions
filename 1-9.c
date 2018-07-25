#include <stdio.h>

int main(void)
{
	int prev, next;

	prev = getchar();
	if (prev != EOF) {
		while ((next = getchar()) != EOF) {
			if (prev == ' ' && prev == next)
				continue;

			putchar(prev);
			prev = next;
		}
		putchar(prev);
	}

	return 0;
}
			

