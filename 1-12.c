#include <stdio.h>

#define IN 	1
#define OUT 	0

int main(void)
{
	int state = OUT; 
	
	int c;
	while ((c = getchar()), c != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == IN) {
				state = OUT;
				printf("\n");
			}
		} else if (state == OUT) {
			state = IN;
		}

		if (state == IN)
		       printf("%c", c);
	}

	return 0;
}
